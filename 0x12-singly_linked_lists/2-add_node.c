#include "lists.h"
#include <string.h>

/**
 * add_node - Adds new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list.
 * @str: The string to be added to the list.
 *
 * Return: function fails - NULL.
 *         success - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *dup_str;
	int len;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newNode->str = dup_str;
	newNode->len = len;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
