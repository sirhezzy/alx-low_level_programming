#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;
	char d;

	c = '0';
	d = 'a';

	while
		(c <= '9') {
			putchar(c);
			c++;
		}
	while
		(d <= 'f') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
