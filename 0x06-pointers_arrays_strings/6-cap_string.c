#include "main.h"

/**
 * cap_string - Converts string lowercase letters to uppercase
 * @str: The string to convert to uppercase
 * Return: the character in uppercase
 */

char *cap_string(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) == ',' || *(str + i) == ' ' || *(str + i) == '{'
		|| *(str + i) == ';' || *(str + i) == '?' || *(str + i) == ')'
		|| *(str + i) == '\"' || *(str + i) == '}' || *(str + i) == '.'
		|| *(str + i) == '\t' || *(str + i) == '\n')
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
				*(str + i + 1) = *(str + i + 1) - 32;
		i++;
	}
	return (str);
}
