#include "main.h"
#include <stdio.h>

/**
 * palindrome - check if the string is a palindrome
 * @s: the string
 * @i: the present index start at 0
 * @n: the length
 * Return: 1 if palindrome 0 otherwise
 */

int palindrome(char *s, int i, int n)
{
	if (i <= (n / 2))
	{
		if (*(s + i) == *(s + n - i - 1))
		{
			return (palindrome(s, i + 1, n));
		}
		if (*(s + i) != *(s + n - i - 1))
			return (0);
	}
	return (1);
}

/**
 * _strlen - find the length of a string
 * @s: the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - call palindrome and _strlen to find if its a palindrome
 * and the length of the string
 * @s: the string
 * Return: the return value of palindrome
 */

int is_palindrome(char *s)
{
	int n;

	if (*s == '\0')
		return (0);
	n = _strlen(s);
	return (palindrome(s, 0, n));
}
