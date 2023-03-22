#include "function_pointers.h"
/**
 * array_iterator - a function that executes
 * a function given as a parameter
 * @array: a poiter to the function
 * @size: size of the array
 * @action: a pinter to the funtion
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
