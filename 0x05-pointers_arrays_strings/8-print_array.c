#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: int array pointer
 * @n: interger
 * Description: Numbers must be separated by comma and
 * spaces.
 */

void print_array(int *a, int n)
{
	int x;

	x = 0;
	for (n--; n >= 0; n--, x++)
	{
		printf("%d", a[x]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
