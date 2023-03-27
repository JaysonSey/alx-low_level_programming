#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: pointer to string.
 *
 * Return: Reverse string.
 */
void rev_string(char *s)
{
	int c = 0, i = 0;
	char tmp;

	while (s[i++])
		c++;
	for (i = c - 1; i >= c / 2; i--)
	{
		tmp = s[i];
		s[i] = s[c - i - 1];
		s[c - i - 1] = tmp;
	}
}
