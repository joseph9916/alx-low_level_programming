#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate two strings tigether the whole of the
 * first string and n bytes if the second one
 * @s1: First string
 * @s2: Second string
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0;
	char *str;

	while (s1[len1] != '\0')
		len1++;
	/**while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		str = malloc(sizeof(char) * (len1 + len2 + 1));**/
	
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < (len1 + n) && s2[i - len1] != '\0' )
	{
		str[i] = s2[i - len1];
		i++;
	}
	str[i] = '\0';
	return (str);
}
