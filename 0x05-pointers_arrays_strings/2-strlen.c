#include "main.h"

/**
 * _strlen - Counts the value of characters
 * @s: The pointer of string
 */

int _strlen(char *s)
{
	char *tmp_address = s;
	int i = 0;
	/*while i doesn't point to a null character increase value of i*/
	while (*tmp_address != '\0')
	{
		i++;
		tmp_address++;
	}
	return (i);
}
