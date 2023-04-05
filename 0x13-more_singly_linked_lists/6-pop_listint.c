#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list.
 *@head: A pointer to the address of the head
 *
 * Return: 0 or data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int delnret;

	while (*head == NULL)
		return (0);

	temp = *head;
	delnret = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (delnret);
}
