#include "lists.h"
#include <stdio.h>

/** sum_listint - Calculates the sum of all the data
 * @head: A pointer to the head.
 * Return: 0 or sum of data
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
