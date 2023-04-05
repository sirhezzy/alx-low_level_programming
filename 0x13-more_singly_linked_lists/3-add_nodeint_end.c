#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t
 * @head: a pointer to the address of the head
 * @n: interger
 *
 * Return: NULL or address of the element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t  *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	while (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}

	return (*head);
}
