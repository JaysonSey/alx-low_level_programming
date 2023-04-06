#include <stdio.h>
#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - return a number if prime
 * @n: the number to be checked
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if a number is a prime number
 * @n: the number to be checked
 * @i: iterate number
 *
 * Return: 1 for prime or 0 for composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % 1 == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
