#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of list
 * @head: points to the head of the linked list
 * @str: string to be added 
 *
 * Return: adress of the element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *n, *l;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(n);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	n->str = dup;
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
		*head = n;

	else
	{
		l = *head;
		while (l->next != NULL)
			l = l->next;
		l->next = n;
	}

	return (*head);
}