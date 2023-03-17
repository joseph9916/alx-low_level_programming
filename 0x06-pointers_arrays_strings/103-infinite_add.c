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
	int len1 = 0, len2 = 0, len_r, i;

	/*Get size n1 and n2*/
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if ((len1 >= size_r - 1) || (len2 >= size_r - 1))
		return (0);


	for (i = 0; i < size_r; i++)
		r[i] = '0';

	len_r = size_r;
	while (len1 > 0 || len2 > 0)
	{
		if (len1 > 0 && len2 > 0)
			r[size_r - 1] += n1[len1 - 1] + n2[len2 - 1] - 2 * '0';
		if (len2 <= 0)
			r[size_r - 1] += n1[len1 - 1]  - '0';
		if (len1 <= 0)
			r[size_r - 1] += n2[len2 - 1]  - '0';
		if (r[size_r - 1] > '9')
		{
			r[size_r - 2] += 1;
			r[size_r - 1] -= 10;
		}
		len1--;
		len2--;
		size_r--;
	}
	for (i = 0; i < len_r - size_r; i++)
	{
		r[i] = r[i + size_r - 1];
	}
	r[i + size_r] = '\0';
	return (r);
}
