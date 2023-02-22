#include "main.h"

/**
 * _abs - computes the absolute value of a number
 *
 * @n: number to find absolut value of
 *
 * Return: Absolute value of parameter
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
