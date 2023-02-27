#include "main.h"
#include <string.h>
/**
* _strlen -> returns length of a string
* @s: string pointer
* Return: lenth of string
*/

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
