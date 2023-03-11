#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * Discription: a function that searches a string
 * for any of a set of bytes.
 * @s: string to be searched.
 * @accept: set of bytes to be searched for.
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
