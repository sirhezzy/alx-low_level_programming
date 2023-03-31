#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all the elements of a list.
  * @h: a list list_t
  * Return: str
  */

size_t print_list(const list_t *h)
{
	size_t values;

	values = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);
		values++;
		h = h->next;
	}
	return (values);
}
