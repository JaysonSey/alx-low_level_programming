#include <stdio.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @src: a pointer to the source memroy area.
 * @dest: a pointer to the destination memory area.
 * @n: the number of bytes to copy.
 * Return: a pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
