#include "main.h"

/**
 * factorial - find factorial of a number
 * @n: number
 * Return: factorial of n or -1 for an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
