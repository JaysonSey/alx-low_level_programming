#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int a, i;

	for (a = 48; a <= 56; a++)
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
