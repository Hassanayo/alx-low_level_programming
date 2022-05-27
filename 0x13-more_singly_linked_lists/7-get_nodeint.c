#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node of a list
 * @head: pointer to the end of the node
 * @index: index of the node
 * Return: if no node, NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
