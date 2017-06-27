#include "lists.h"

/**
 * free_listint2 - Frees nodes of a list
 * @head: Pointer to the address of list head
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current_head;

	if (head == NULL)
		return;
	while (*head)
	{
		current_head = *head;
		*head = (*head)->next;
		free(current_head);
	}
	head = NULL;
}
