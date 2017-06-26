#include "lists.h"

/**
 * pop_listint - Pops data from the head node
 * @head: Pointer to the address of head node
 *
 * Return: The int data or 0
 *
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *current_head;
	listint_t *new_head;

	if (*head == NULL)
		return (0);
	current_head = *head;
	data = current_head->n;
	new_head = current_head->next;
	*head = new_head;
	free(current_head);
	return (data);
}
