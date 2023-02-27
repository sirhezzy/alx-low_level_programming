#include "main.h"

/**
* rev_string -> prints string in reverse
* @s: string reverse
* Return: 0
*/

void rev_string(char *s)
{
	int a, half, length;
	char tmp;

	for 
	(length = 0; s[length] != '\0'; length++);
	a = 0;
	half = length / 2;

	while (half--)
	{
		tmp = s[length - a - 1];
		s[length - a - 1] = s[a];
		s[a] = tmp;
		a++;
	}
}
