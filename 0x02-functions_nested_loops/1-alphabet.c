#include "main.h"

/**
* main - Entry point
* print_alphabet -> prints the lowercas alphabets
* 
*/

void print_alphabet(void);
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	_putchar('\n');
}
