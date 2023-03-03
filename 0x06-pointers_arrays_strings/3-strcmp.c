#include "main.h"

/**
 * _strcmp - Compare two stings and return the difference of the first 
 * difference in both strings
 * @s1: String 1
 * @s2: String 2
 * Return: Return the difference
 */

int _strcmp(char *s1, char *s2)
{
	while ((!(*s1 == '\0' || *s2 == '\0')) && (*s1 == *s2))
	{
			s1++;
			s2++;
	}
	return (*s1 - *s2);
}
