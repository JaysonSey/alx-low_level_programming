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
	for (int i = 3; i <= 98; i++)
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
