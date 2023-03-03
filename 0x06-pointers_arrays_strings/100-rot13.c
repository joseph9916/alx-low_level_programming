#include "main.h"
#include <stdio.h>

/**
 * rot13 - rotate characters by 13
 * @str: String to perform algorithm on
 * Return: pointer to new character
 */

char *rot13(char *str)
{
	char a[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char b[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i, j;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		j = 0;
		while (a[j] != *(str + i))
			j++;
		if (j < 52 && a[j] == *(str + i))
		{
			/*printf("%c",*(str + i));*/
			*(str + i) = b[j];
		}
	}
	return (str);
}
