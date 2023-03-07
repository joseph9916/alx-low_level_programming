#include "main.h"
#include <stddef.h>

/**
 *  strbrk - Returns the pointer which consist only of bytes from accept
 *  @s: The string
 *  @accept: the substring
 *  Return: the length of substring found in s
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*(s) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *s)
				return (s);
			j++;
		}
		s++;
	}
	return (NULL);
}
