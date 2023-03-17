#include <stdio.h>

/**
 * main - main block
 * Description: print the alphabet in lowercase
 * and then in uppercase, followed by a new line
 */
int main(void)
{
	char alp[52] = "abcdeghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	     int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}

