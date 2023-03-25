#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * int_index -  a function that searches for an integer
 * @array: array to search the values in
 * @size: size of array
 * @cmp: copmpare function pointer
 * Return: The index of the integer if found -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array = NULL)
	{
		free(array);
		return(-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
