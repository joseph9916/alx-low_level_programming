#include <stdio.h>

/**
 * main - Print alphabet a-z
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
