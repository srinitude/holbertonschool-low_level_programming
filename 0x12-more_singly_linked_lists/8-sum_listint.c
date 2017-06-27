#include "lists.h"

/**
 * sum_listint - Sums all of the data in list
 * @head: Pointer to the head node
 *
 * Return: The sum or 0
 *
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head)
	{
		sum += (head->n);
		head = head->next;
	}
	return (sum);
}
