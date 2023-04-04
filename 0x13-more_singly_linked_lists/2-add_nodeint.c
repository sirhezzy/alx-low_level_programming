#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a list.
 * @head: pointer to the address of the head of the list.
 * @n: interger
 *
 * Return: NULL or the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	while (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
