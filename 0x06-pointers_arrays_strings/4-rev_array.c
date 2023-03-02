#include "main.h"

/**
 * reverse_array - Prints both string normally and in reverse to stand output
 * @a: beginning pointer of the array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < (n / 2))
	{
		temp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = temp;
		i++;
	}
}
