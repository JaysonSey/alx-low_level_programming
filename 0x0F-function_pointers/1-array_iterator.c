#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: array to be iterated
 * @size: size of array
 * @action: pointer to function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
