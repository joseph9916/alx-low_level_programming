#include <stdio.h>

/**
 * main - Print largest prime number
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	long int i;
	int j;

	i = 612852475143;
	j = 3;

	while (i / j != 1)
	{
		if (i % j == 0)
			i = i / j;
		else
			j++;
	}
	printf("%ld\n", i);
	return (0);
}
