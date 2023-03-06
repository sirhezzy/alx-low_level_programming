#include "main.h"
/**
 * *_memcpy - copies memory area.
 * Description: a function that copies memory area.
 * @dest: dest memory area.
 * @src: source memory.
 * @n: length of src.
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
