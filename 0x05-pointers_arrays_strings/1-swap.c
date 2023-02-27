#include "main.h"

/**
 * swap_int - Swaps the value of two int
 * @a: The pointer of n
 * @b: pointer of second int b
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
