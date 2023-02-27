#include "main.h"

/**
* swap_int -> swaps the values of two integers
* @a: parameter 1
* @b: parameter 2
* Return: Always 0
*/

void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
