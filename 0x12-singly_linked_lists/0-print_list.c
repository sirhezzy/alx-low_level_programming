#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all the elements of a list.
  * @h: a list list_t
  * Return: str
  */

size_t print_list(const list_t *h)
{
	size_t values = 0;

	while (h != NULL)
	{
		if (h -> str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		h = h-> next;
		values++;
		}
	}
	return (values);
}
