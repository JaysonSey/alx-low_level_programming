#include <stdio.h>

/**
 * factorial - a function that return the factorial of a given number
 * @n: an integer
 *
 * Return: the factorial of n, or -1 if m is negtaive
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
