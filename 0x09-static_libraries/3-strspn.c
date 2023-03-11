#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of s
 *  which consist only of bytes from accept
 *  @s: The string
 *  @accept: the substring
 *  Return: the length of substring found in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (*(s) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *s)
			{
				i++;
				break;
			}
			j++;
		}
		if (*(accept + j) == '\0')
			break;
		s++;
	}
	return (i);
}
