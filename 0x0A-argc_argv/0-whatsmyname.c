#include <stdio.h>

/**
 * main - Prints the argument name
 * @argc: count of arguements
 * @argv: input arguements
 * Return: 0 Always Succes
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
