#include <stdio.h>

/**
 * main - Print numbers 0-9 while adding space and ,
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch < 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
