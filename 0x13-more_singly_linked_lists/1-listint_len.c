#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints elements in the list
 * Description: a function that returns the number of elements int a list
 * @h: pointer to the head
 * @next: points to the next node
 *
 * Return: the number of nodes of the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}