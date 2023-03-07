#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * Description: function that returns the value of x raised to a power y.
 * @x: The number to be raised.
 * @y: The power.
 *
 * Return: num_power.
 */

int _pow_recursion(int x, int y)
{
	int num_power = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	num_power *= _pow_recursion(x, y - 1);

	return (num_power);
}
