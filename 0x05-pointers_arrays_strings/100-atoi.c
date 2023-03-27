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
	int j = 1;
	int i = 0;

	if (s[0] == '-')
	{
		c = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}

	for (; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			break;
		}
		c = c * 10 + (s[i] - '0');
	}

	return (j * c);
}
