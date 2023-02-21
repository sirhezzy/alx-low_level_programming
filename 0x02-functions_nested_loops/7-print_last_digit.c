#include "main.h"

/**
* print_last_digit - prints the last digit
* @x: argument
* @y: argument
* Return: 0
*/
int print_last_digit(int x)
{
	if (x < 0)
		x = -x;
	y = x % 10;
	_putchar(x + '10');
	return (x);
}
