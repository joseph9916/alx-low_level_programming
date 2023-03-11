#include <stdio.h>

/**
 * main - Prints the argument name
 * @argc: count of arguements
 * @argv: input arguements
 * Return: 0 Always Succes
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
