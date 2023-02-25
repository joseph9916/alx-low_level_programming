#include <stdio.h>

/**
 * main - Print numbers 0-9 while adding space and ,
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch < '9')
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
