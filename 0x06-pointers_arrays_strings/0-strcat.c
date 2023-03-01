#include "main.h"

/**
 * *_strcat -> concatenates two strings 
 * @dest: First parameter
 * @src: Second parameter
 * Return: A string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i]; i++)
	{
		dest[len++] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
