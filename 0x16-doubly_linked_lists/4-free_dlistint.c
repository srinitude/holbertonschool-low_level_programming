#include "lists.h"

/**
 * free_dlistint - Frees the entire linked list
 * @head: The head of the list
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_head = NULL;

	while (head)
	{
		current_head = head;
		head = head->next;
		free(current_head);
	}
}
