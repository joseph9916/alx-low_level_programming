#include "main.h"
#include <stddef.h>

/**
 *  _strstr - Returns the pointer from where the substring is found in accept
 *  @haystack: The string
 *  @needle: the substring
 *  Return: the length of substring found in s
 */

char *_strstr(char *haystack, char *needle)
{
	int j;

	while (*haystack != '\0')
	{
		j = 0;

		if (*haystack == *needle)
		{
			while (*(needle + j) != '\0')
			{
				if (*(haystack + j) == *(needle + j))
					j++;
				else
					break;
			}
			if (*(needle + j) == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
