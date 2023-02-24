#include "main.h"

/**
* print_diagonal -> printing diagonal
* @n: interger parameter
*/
void print_diagonal(int n)
{
	int x, i;
	int n = 0;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
		for (i = 0; i <= x; i++)
			_putchar(' ');
		    _putchar(92);
		    _putchar('\n');
		}

	}
}
