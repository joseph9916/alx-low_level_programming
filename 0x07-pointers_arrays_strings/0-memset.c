#include "main.h"

/**
 * _memset - Fills a memory area with a constant byte
 * @s: Memory area
 * @b: Constant byte
 * @n: n bytes of memoryto fill
 * Return: Return pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char* p = s;

	while (n--)
	{
		*p = b;
		p++;
	}
	return (s);
}
