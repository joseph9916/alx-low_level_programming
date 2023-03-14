#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - Concantenates arguement strings together
 * @ac: number of arguements
 * @av: array of strings
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++)
			;
		len += j + 1;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++)
		{
			str[k] = *(av[i] + j);
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
