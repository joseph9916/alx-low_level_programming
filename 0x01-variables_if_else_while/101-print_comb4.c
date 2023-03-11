#include <stdio.h>

/**
 * main - Print a comibination of three numbers
 * while the first combination smaller than the next
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		j = i + 1;
		while (j <= 56)
		{
			k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				/*if the combination is not 89 put ' ' and ,*/
				if (!(i == 55 && j == 56 && k == 57))
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}
			j++;
		}
	}

	putchar('\n');

	return (0);
}
