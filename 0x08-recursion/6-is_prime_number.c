#include "main.h"

/**
 * prime_number - find if n is divisible by i
 * if divisible not a prime number else its is
 * @n: Number
 * @i:divisor
 * Return: 0 if not prime number 1 otherwise
 */

int prime_number(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_number(n, i + 1));
}

/**
 * is_prime_number - Find if prime number
 * @n: number
 * Return: 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, 2));
}
