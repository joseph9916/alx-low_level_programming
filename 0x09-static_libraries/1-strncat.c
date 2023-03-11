#include "main.h"

/**
 * _strncat - Concantenate two strings to each other based in the number
 * of bytes n
 * @dest: the string to append to
 * @src: the source of the string
 * @n: number of bytes to concantenate
 * Return: the dest string pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (*(dest + i) != '\0')
		i++;
	n = n + i; /*Add the lentgh of bytes to add to the normal length*/
	while (*src != '\0' && i < n)
	{
		*(dest + i) = *src;
		src++;
		i++;
	}
	*(dest + i++) = '\0';
	return (dest);
}
