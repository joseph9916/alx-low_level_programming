#include "main.h"
#include <unistd.h>
/**
 * main - print _putchar
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char text[9] = "_putchar\n";
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
