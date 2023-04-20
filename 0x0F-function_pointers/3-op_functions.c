#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add operator
 * @a: integer a
 * @b: integer b
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract operator
 * @a: integer a
 * @b: integer b
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply operator
 * @a: integer a
 * @b: integer b
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide operator
 * @a: integer a
 * @b: integer b
 * Return: 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modular operator
 * @a: integer a
 * @b: integer b
 * Return: o
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
