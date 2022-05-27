#include "list.h"

/**
 * sum_listint - calculates the sum of all data (n) of a list
 * @head: pointer to the head of list
 * Return: if the list is empty 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
