#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
char **divide_to_array(char **str_arr, char *str, int len)
{
	int i = 0,k = 0, j, l;
	while (i < len)
	{
		while (str[i] == 32 || str[i] == '\t' || str[i] == '\n')
		{
			i++;
			printf("%d",i);
		}
		j = i;
		while (!(str[i] == 32 || str[i] == '\t' || str[i] == '\n'))
			i++;
		str_arr[k] = malloc(sizeof(char) * (i - j + 1));
		l = 0;
		while (!(str[j] == 32 || str[j] == '\t' || str[j] == '\n'))
		{
			printf("%c",(str[j]));
			str_arr[k][l] = str[j];
			l++;
			j++;
		}
		k++;
		str_arr[k][l] = '\0';
	}
	return (str_arr);
}
*/
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
	int i = 0, j, l = 0, k = 0, len, n = 0;
	char **str_arr;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	/*Find the length of the word*/
	while (str[i] != '\0')
	{
		if (!(str[i] == 32 || str[i] == '\t' || str[i] == '\n'))
		{
			n++;
			while (!(str[i] == 32 || str[i] == '\t' || str[i] == '\n'))
				i++;
		}
		else
			i++;
	}
	len = i;
	printf("%d, %d",len,n);
	str_arr = malloc(sizeof(char *) * n);
	if (str_arr == NULL)
	{
		free(str_arr);
		return (NULL);
	}
	printf("%s",str);
	/*str_arr = divide_to_array(str_arr, str, len);*/
	i = 0;
	while (i < len)
        {
                while (str[i] == 32 || str[i] == '\t' || str[i] == '\n')
                {
                        i++;
                        printf("%d",i);
                }
                j = i;
                while (!(str[i] == 32 || str[i] == '\t' || str[i] == '\n'))
                        i++;
                str_arr[k] = malloc(sizeof(char) * (i - j + 1));
                l = 0;
                while (!(str[j] == 32 || str[j] == '\t' || str[j] == '\n'))
                {
                        printf("%c",(str[j]));
                        str_arr[k][l] = str[j];
                        l++;
                        j++;
                }
                k++;
                str_arr[k][l] = '\0';
        }
        return (str_arr);
	return (str_arr);
}
