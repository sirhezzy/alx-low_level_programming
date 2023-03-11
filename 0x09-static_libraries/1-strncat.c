#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: string to be appended on.
 * @src: string to be appended to dest.
 * @n: number of bytes from src.
 *
 * Return: string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];
	return (dest);
}
