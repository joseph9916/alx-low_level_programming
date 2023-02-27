#include <stdio.h>

/**
 * main - Print a comibination of numbers
 * while the first combination smaller than the next
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		j = i + 1;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			/*if the combination is not 89 put ' ' and ,*/
			if (!(i == 56 && j == 57))
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
	}

	putchar('\n');

	return (0);
}
