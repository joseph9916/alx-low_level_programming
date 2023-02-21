#include <stdio.h>

/**
 * main - Print hexidecimal numbers in lowercase
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)

		putchar(ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
