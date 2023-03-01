#include "main.h"

/**
 * rev_string - Prints both string normally and in reverse to stand output
 * @s: beginning pointer of string
 */

void rev_string(char *s)
{
	int i = 0;
	int len; /*Length of the string*/
	char temp;

	while (*(s + i) != '\0')
		i++;
	len = i;
	i = 0;
	while (i < (len / 2))
	{
		temp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = temp;
		i++;
	}
}
