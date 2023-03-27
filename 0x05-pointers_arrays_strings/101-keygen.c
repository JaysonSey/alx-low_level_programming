#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords for
 * the program 101-crackme.
 * Return: 0
 */

int main(void)
{
	char password[6];
	int sum, i;

	srand(time(NULL));

	while (1)
	{
		for (i = 0; i < 5; i++)
		{
			password[i] = rand() % ('~' - ' ' + 1) + ' ';
		}
		password[5] = '\0';

		sum = 0;
		for (i = 0; i < 5; i++)
		{
			sum += password[i];
		}

		for (i = 0; i < 5; i++)
		{
			password[i] = (sum % password[i]) + 0x1F;
		}

		sum = 0;
		for (i = 0; i < 5; i++)
		{
			sum += password[i];
		}
		if (sum == 2772)
		{
			printf("%s\n", password);
			exit(0);
		}
	}

	return (0);
}
