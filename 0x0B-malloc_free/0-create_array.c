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
	char *array = (char *) malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
