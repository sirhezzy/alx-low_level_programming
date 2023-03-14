#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory
 * @str: string to be copied
 *
 * Return: NULL if str = NULL or if insufficient memory was available;
 *		on success, function returns a pointer to the duplicated string. 
 */

char *_strdup(char *str)
{
	char *dup;
	int index;
	int len;
	len = 0;
	
	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	dup = malloc(sizeof (char) * (len + 1));
	
	if (dup == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dup[index] = str[index];

	dup[len] = '\0';

	return (dup);
}
