#include <stdio.h>

/**
 * main - Print numbers 0-9 while adding space and ,
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		putchar(",");
		putchar(" ");
	}

	putchar('\n');

	return (0);
}
