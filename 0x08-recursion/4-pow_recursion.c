#include "main.h"

/**
 * _pow_recursion - Recursively find the power of x by y; x^y
 * @x: number
 * @y: power
 * Return: Result
 */

int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
