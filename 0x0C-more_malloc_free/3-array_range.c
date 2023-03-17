#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - A range of array from from min - max
 * @min: first number to add
 * @max: last number
 * Return: pointer to array or NULL if it fails
 */

int *array_range(int min, int max)
{
	int i = 0, len;
	int *arr;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	while (i < len)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
