#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9 followed by a newline
 *
 * Return: the number from 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
