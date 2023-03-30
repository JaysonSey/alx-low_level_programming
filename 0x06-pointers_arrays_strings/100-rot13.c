#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char *rot13_str = str;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((str[i] >= 'a' && str[i] < 'n') ||
					(str[i] >= 'A' && str[i] < 'N'))
			{
				rot13_str[i] = str[i] + 13;
				break;
			}
			else if ((str[i] >= 'n' && str[i] <= 'z') ||
					(str[i] >= 'N' && str[i] <= 'Z'))
			{
				rot13_str[i] = str[i] - 13;
				break;
			}
		}
	}

	return (rot13_str);
}
