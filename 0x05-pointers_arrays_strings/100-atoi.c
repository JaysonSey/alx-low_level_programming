#include <stdio.h>

/**
 * _atoi -  convert a string to an integer.
 * @s: pointer to string
 *
 * Return: Converted integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int b = 0;
	int j = 1;
	int i = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			j *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			i = 1;
			b = (b * 10) + (s[c] - '0');
			c++;
		}
		if (i == 1)
		{
			break;
		}
		c++;
	}
	b *= j;
	return (b);
}
