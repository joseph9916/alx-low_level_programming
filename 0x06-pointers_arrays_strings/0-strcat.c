#include "main.h"

/**
 * _strcat - Concantenate two strings to each other
 *@dest: the string to append to
 *@src: the source of the string
 *Return: Return the pointer to the destination
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*src != '\0')
	{
		*(dest + i) = *src;
		src++;
		i++;
	}
	*(dest + i++) = '\0';
	return (dest);
}
