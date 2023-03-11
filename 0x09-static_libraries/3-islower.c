#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the string to check the case for
 * Return: 1 if lowercase, 0 if uppercase
 */

int _islower(int c)
{
	if (c > 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
