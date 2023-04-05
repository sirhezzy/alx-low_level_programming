#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t at a position.
 * Description: a function that inserts a new node at a given position.
 * @head: A pointer to the address of the head
 * @n: interger for the new node
 * @idx: index of the new node
 *
 * Returns: the address of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp = *head;
	unsigned int node;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = temp;
		*head = newNode;
		return (newNode);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
