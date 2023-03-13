#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - Concantate string s1 and s2
 * @s1: first string
 * @s2: second string
 * Return: the pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i;
	char *str;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	if (len1 == 0 && len2 == 0)
	{
		str = malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	else
	{
		str = malloc(sizeof(char) * (len1 + len2 + 1));
		for (i = 0; i < len1; i++)
			str[i] = s1[i];
		for (i = 0; i < len2; i++)
			str[len1 + i] = s2[i];
		str[len1 + len2] = '\0';
		return (str);
	}
}
