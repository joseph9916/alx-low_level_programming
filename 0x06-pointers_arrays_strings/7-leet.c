#include "main.h"
#include <stdio.h>

/**
 * leet - change characters aeiou 43071
 * @str: String to perform algorithm on
 * Return: pointer to new character
 */

char *leet(char *str)
{
	char a[10] = "aAeEoOtTlL";
	char b[5] = "43071";
	int i, j;

	for (i = 0;*(str + i) != '\0'; i++)
	{
		j = 0;
		while (a[j] != *(str + i))
			j++;
		if (j < 10 && a[j] == *(str + i))
		{
			/*printf("%c",*(str + i));*/
			*(str + i) = b[j / 2];
		}
	}
	return (str);
}
