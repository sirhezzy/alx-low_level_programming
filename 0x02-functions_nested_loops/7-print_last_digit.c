#include "main.h"

/**
* print_last_digit - prints the last digit
* @x: argument
* @y: argument
* Return: last digit
*/
int print_last_digit(int x)
{
	int x;
	int y;

	if (x < 0)
		x = -x;

	y = x % 10;

	if (y < 0)
		y = -y;

	_putchar(y + '10');
	return (y);
}
