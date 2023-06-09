#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: The pointer to string.
 *
 * Return: String
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
