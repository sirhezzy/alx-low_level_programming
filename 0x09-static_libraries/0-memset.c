#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer assigned to the constant
 * @b: const
 * @n: number of bytes to use
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; n > 0; a++, n--)
	{
		s[a] = b;
	}

	return (s);
}
