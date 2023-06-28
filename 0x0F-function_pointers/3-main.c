#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	int a, b;
	if (ac != 4)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
}
