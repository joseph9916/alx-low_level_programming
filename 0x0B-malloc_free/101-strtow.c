#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * divide_to_array - takes the 2d array and puts in the words
 * ending with a null pointer
 * @str_arr: 2d array of words
 * @str: string to divide
 * @n: no of words
 * Return: 2d array
 */
char **divide_to_array(char **str_arr, char *str, int n)
{
	int i = 0, j = 0, k = 0, l;

	while (str[i] != '\0')
	{
		if (str[i] != 32 && (str[i - 1] == 32 || i == 0))
		{
			j = i;
			while (str[j] != 32 && str[j] != '\0')
				j++;
			if (k < n)
				str_arr[k] = ((char *)malloc(sizeof(char) * (j - i + 1)));
			if (str_arr[k] == NULL)
			{
				free(str_arr[k]);
				return (NULL);
			}
			l = 0;

			while (j > i)
			{
				str_arr[k][l] = str[i];
				l++;
				i++;
			}
			str_arr[k][l] = '\0';
			k++;
		}
		else
			i++;
	}
	str_arr[k] = NULL;
	return (str_arr);
}

/**
 * strtow - Divide a string of words to an array of words
 * divided by a space
 * @str: string to divide
 * Return: initial address to the string
 */

char **strtow(char *str)
{
	/*i,j counting variables,k to increment by words,*/
	/*l for letters in word, n no of words*/
	int i = 0, n = 0;
	char **str_arr;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	/*Find the length of the word*/
	while (str[i] != '\0')
	{
		if (str[i] != 32 && (str[i - 1] == 32 || i == 0))
			n++;
		i++;
	}
	str_arr = malloc(sizeof(char *) * (n + 1));
	if (str_arr == NULL)
	{
		free(str_arr);
		return (NULL);
	}
	str_arr = divide_to_array(str_arr, str, n);
	return (str_arr);
}
