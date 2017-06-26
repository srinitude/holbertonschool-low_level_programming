#include "lists.h"

/**
 * free_listint - Frees all nodes within a list
 * @head: The head of the list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *current_head;

	while (head)
	{
		current_head = head;
		head = head->next;
		free(current_head);
	}
}
