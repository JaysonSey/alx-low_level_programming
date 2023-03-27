#include <stdio.h>

/**
 * _strlen -  a function that returns the length of a string.
 * @s: Pointer to the first character of a string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
