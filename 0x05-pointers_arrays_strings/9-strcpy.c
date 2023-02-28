#include "main.h"

/**
 * _strcpy - Cpoies string src to dest
 * dest: Destination string
 * src: Source string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		*(dest + i) = *src;
		i++;
		src++;
	}
	/*The loop will terminate befor the null character*/
	/*So we add the null character to it*/
	*(dest + i++) = *src++;
	return (dest);
}	
