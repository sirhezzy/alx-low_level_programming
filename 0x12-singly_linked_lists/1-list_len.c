#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: The linked list_t list.
 * @elements: a counter variable for size_t (node)
 *
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}

	return (elem);
}
