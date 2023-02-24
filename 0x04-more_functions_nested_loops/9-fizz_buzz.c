#include <stdio.h>

/**
 * main - print all numbers from 1-100,
 * if divisible by 3 print fizz
 * if divisible by 5 print buzz
 * if divisible by both print fizzbuzz
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	/* For 100 to print without a space*/
	printf("Buzz");
	printf("\n");

	return (0);
}
