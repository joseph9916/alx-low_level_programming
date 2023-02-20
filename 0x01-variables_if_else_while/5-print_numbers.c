#include <stdio.h>

/**
 * main - Print digit 1-9;
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
