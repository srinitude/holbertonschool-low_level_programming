#include "lists.h"

/**
 * free_list - Frees linked list entirely
 * @head: The head of the list
 *
 */

void free_list(list_t *head)
{
	list_t *current_head;
	size_t i;

	if (head == NULL)
		return;
	for (i = 0; head; i++)
	{
		current_head = head;
		head = head->next;
		free(current_head->str);
		free(current_head);
	}

}
