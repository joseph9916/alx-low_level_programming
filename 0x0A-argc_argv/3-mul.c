#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * main - Prints the mul of two numbers
 * @argc: count of arguements
 * @argv: input arguements to multiply
 * Return: 0 Success, 1 fail
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
