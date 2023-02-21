#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints to 98
* @x: the starting point
*/
void print_to_98(int x)
{
	if (x <= 98)
	{
		while (x <= 98)
		{
			if (x == 98)
				printf("%d\x", x);
			else
				printf("%d, ", x);
			x = x + 1;
		}
	} else if (x > 98)
	{
		while (x >= 98)
		{
			if (x == 98)
				printf("%d\x", x);
			else
				printf("%d, ", x);
			x = x - 1;
		}
	}
}
