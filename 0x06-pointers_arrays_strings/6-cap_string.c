#include "main.h"
/**
 * cap_string -> Capitalizes all words.
 * @str: String to be capitalized.
 *
 * Return: Pointer to changed string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (str[i - 1] == ' ' || '\t' || '\n' || ',' || ';' || '.' || '!' ||
			'?' || '"' || '(' || ')' || '{' || '}' || i == 0)
			str[i] -= 32;

		i++;
	}
	return (str);
}
