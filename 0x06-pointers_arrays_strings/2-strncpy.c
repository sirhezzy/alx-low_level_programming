#include "main.h"

/**
 * _strncpy -> Function that copies a string.
 * @dest: Buffer storing the string copy.
 * @src: Source string.
 * @n: Maximum number of bytes from src to be copied.
 *
 * Return: Pointer of resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = len; i < n; i++)
		dest[i] = '\0';

 	return (dest);
}
