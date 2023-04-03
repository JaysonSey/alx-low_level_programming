#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @size: the size of the square matrix
 * @a: the 2D array representing the square matrix
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, b = 0;

	for (i = 0; i < size; i++)
	{
		j += a[i * size + i];
		b += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", j, b);
}
