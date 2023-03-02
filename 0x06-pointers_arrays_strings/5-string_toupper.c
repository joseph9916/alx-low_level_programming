#include "main.h"

/**
 * string_toupper - Converts string lowercase letters to uppercase
 * @str: The string to convert to uppercase
 * Return: the character in uppercase
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) = *(str + i) - 32;
		i++;
	}
	return (str);
}
