#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_listint2 - frees a list
 * @head, a pointer to the address of the head of a list.
 * Description: a function that frees a listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;

	}
	head = NULL;
}
