#include <stdio.h>
#include <stdlib.h>

/**
 * main - sum all numbers if contains symbols print error and return 1
 * @argc: count of arguements
 * @argv: input arguements to add
 * Return: 0 always success 1 Failure
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (*(argv[i] + j) != '\0' && *(argv[i] + j) >= '0' &&
				*(argv[i] + j) <= '9')
			j++;
		if (*(argv[i] + j) == '\0')
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
