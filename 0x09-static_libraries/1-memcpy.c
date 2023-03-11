#include "main.h"

/**
 * _memcpy - Fills a memory area with a constant byte
 * @dest: Memory area to copy to
 * @src: Source of memory area to fill
 * @n: n bytes of memoryto fill
 * Return: Return pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p = *src;
		p++;
		src++;
	}
	return (dest);
}
