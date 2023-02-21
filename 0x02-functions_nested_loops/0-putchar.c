#include "main.h"
#include <unistd.h>
/**
 * main - print _putchar
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char text[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
