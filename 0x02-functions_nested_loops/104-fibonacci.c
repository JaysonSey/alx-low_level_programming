#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */

int main(void)
{
	int a = 1, b = 2, c;

	printf("%d, %d, ", a, b);
	for (c = 3; c <= 98; c++)
	{
		c = a + b;
		printf("%d", c);
		if (i < 98)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
