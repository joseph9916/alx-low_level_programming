#include "main.h"
#include <stddef.h>

/**
 * _strchr - Look for a chracter c in s
 * @s: Pointer tostring
 * @c: character to find
 * Return: Address where character is found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
