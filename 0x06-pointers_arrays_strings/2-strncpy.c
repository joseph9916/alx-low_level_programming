#include "main.h"

/**
 * _strncpy - Cpoies n bytes string src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes
 * Return: The starting pointer of destination
 * Meaning I won't increment dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*(dest + i) = *src;
		i++;
		src++;
	}
	/*So we add the null characters to dest till n*/
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
