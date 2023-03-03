#include "main.h"
#include <stdio.h>

/**
 * infinite_add - add two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Result buffer
 * @size_r: Size of result buffer r
 * Return: r if size of buffer is more than amount characters
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, len;
	
	/*Get size n1 and n2*/
	for (i = 0; *(n1 + i) != '\0'; i++)
		*(n1 + i) = *(n1 + i) - '0';
	for (j = 0; *(n2 + j) != '\0'; j++)
		*(n2 + j) = *(n2 + j) - '0';
	if ((i >= size_r) || (j >= size_r))
		return (0);
	else
	{
		*r = *n1 + *n2;
		if (i < j)
			i = j;
		len = i;
		i--;
		for (; i <= 0; i--)
			*(r + i) = *(r + i) + '0';
		if (*(r + i) > '9')
		{
			*(r + i) = *(r + i) - 10;
			if (i >= 0)
				*(r + i - 1) = *(r + i -1) + 1;
			else
				if (len < size_r)
				{
					for (len--; len <= 0; len--)
						*(r + i +1) = *(r + i);
					*r = '1';
				}
				else
					return (0);
		}
	}
		return (r);
}
