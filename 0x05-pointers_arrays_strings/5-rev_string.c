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
	length, a = 0;
	
	for (s[length] != '\0'; length++);
	half = length / 2;

	while (half--)
	{
		tmp = s[length - a - 1];
		s[length - a - 1] = s[a];
		s[a] = tmp;
		a++;
	}
}
