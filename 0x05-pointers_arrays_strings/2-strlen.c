#include "main.h"

/**
* _strlen -> returns length of a string
* @s: string pointer
*/

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len = len + 1;
	}
	return (len);
}
