#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random letter and print it
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putcahr('\n');
	return (0);
}
