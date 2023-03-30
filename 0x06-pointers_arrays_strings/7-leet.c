#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_map[128] = {0};
	char *leet_str = str;

	for (i = 'a'; i <= 'z'; i++)
		leet_map[i] = "4433007711"[i - 'a'];

	for (i = 0; str[i]; i++)
	{
		j = str[i];
		if (j >= 'a' && j <= 'z')
			j = leet_map[j];
		else if (j >= 'A' && j <= 'Z')
			j = leet_map[j - 'A' + 'a'];
		leet_str[i] = j;
	}

	return (leet_str);
}
