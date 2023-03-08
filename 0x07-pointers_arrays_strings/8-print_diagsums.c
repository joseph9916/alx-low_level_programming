#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two diagonals on an array
 * @a: The matrix
 * @size: Size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(i * size) + i];
		sum2 += a[(i * size) - i + (size - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
