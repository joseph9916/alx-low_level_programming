#include <stdio.h>

/**
 * main - Prints the argument name
 * @argc: count of arguements
 * @argv: input arguements
 * Return: 0 Always Succes
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
