#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array.
 * @array: The array to work on
 * @size: Size of the array
 * @action: function to exectute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
