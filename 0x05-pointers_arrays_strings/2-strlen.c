#include "main.h"
#include <string.h>
/**
* _strlen -> function returns length of a string
* @s: string pointer
* Return: lenth of string
*/

int _strlen(char *s)
{
	int len = 0;
	
	while (s[len])
		len++;
	return (len);
}
