#include <stdio.h>

/**
 * main - prints all possible combinations of singel-digit numbers
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
		if (d != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
