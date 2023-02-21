#include "main.h"
/**
* main - Entry point
* Discription: prints the lowercas alphabets
*
*/

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
