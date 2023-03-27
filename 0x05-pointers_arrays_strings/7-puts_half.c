#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i - 1) / 2 + 1;
	}

	while (str[j] != '\0')
	{
		putchar(str[j]);
		j++;
	}

	putchar('\n');
}

