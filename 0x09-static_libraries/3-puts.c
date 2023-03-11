#include "main.h"

/**
 * _puts - function that prints a string and a new line
 * @str: to print
 * Return: 0
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
