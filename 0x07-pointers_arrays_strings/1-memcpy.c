#include <main.h>

/**
*_memcpy - A function that copies memory area.
@dest: destination memory area
@src: source memory
@n: length of src
Return: pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
