#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random letter and print it
 * Return: 0
 */
main void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
