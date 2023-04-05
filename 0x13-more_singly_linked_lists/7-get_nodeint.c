#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a liked list.
 * @head: a pointer to the head
 * @index: for the node starting at 0.
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for(n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
