#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count = 0;
	unsigned int fib1 = 1, fib2 = 2, fib3;

	printf("%u, %u", fib1, fib2);
	count += 2;

	while (count < 98)
	{
		fib3 = fib1 + fib2;
		printf(", %u", fib3);
		count++;
		fib1 = fib2;
		fib2 = fib3;
	}

	printf("\n");

	return (0);
}
