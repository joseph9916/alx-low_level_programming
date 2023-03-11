#include <stdio.h>

/**
 * main - Print a comibination of numbers
 * while the first combination smaller than the next
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = i; k <= 57; k++)
			{
				for (l = j + 1; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					/*if the combination is not 89 put ' ' and ,*/
					if (!(i == 57 && j == 56 && k == 57 && l == 57))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
