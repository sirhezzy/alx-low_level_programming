#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function given as a
 * parameter on each element of an array.
 * @array: Array.
 * @size: Size of array.
 * @action: A pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
		
	unsigned int i;
	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
