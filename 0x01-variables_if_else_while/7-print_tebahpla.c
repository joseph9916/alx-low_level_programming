#include <stdio.h>

/**
 * main - Print alphabet a-z
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
