#include <stdio.h>
#include "main.h"

/**
 * main - prints arguments passed to the program
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
