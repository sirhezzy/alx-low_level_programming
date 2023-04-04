#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements in the list "listint_t"
 * Description: a function that prints all elements in the list
 * @h: pointer to the head
 *
 * Return: the number of nodes of the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node;

	node 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;

	}
	return (node);
}
