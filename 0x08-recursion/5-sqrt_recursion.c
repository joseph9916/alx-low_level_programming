#include "main.h"

/**
 * _sqrt - squares i till it equals n then return it or -1 if root not found
 * @i : squrae root
 * @n: number to find sqare root of
 * Return: Result
*/
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i > n / 2)
		return (-1);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Recursively find square root;
 * @n: number to find sqare root of
 * Return: _sqrt function or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}
