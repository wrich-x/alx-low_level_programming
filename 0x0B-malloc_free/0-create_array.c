#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates the array and assigns char c
 * @size: size of the arry
 * @c: char to be assigned
 * Return: pointer to array, null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
