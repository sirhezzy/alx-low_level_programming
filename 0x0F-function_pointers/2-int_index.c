#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: array of integers.
 * @size: The number of elements in the array array
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: 0, -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
