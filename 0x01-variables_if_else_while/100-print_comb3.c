#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int a, i;

	for (a = 48; i <= 56; i++)
	{
		for (i = 49; i <= 57; i++)
		{
			if (i > a)
			{
				putchar(a);
				putchar(i);
				if (a != 56 || i != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
