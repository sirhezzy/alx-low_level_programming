#include "main.h"
/**
 * *_strchr - Locates a character in a string.
 * Description: a function that locates a character
 *			in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 * Return: pointer to first occurance
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
