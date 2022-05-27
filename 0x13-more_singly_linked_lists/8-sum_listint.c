#include "lists.h"

/**
 * sum_listint - calculates the sum of all data
 * @head: pointer to the head of list
 * Return: if the list is empty 0 else sum
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
