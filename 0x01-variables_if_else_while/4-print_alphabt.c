#include <stdio.h>

/**
 * main - Print alphabet a-z
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			;
		else
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
