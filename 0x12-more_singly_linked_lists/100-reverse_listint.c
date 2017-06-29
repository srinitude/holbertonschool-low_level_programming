#include "lists.h"

/**
 * reverse_listint - Reverses a linked list of int nodes
 * @head: The address of the pointer to the head node
 *
 * Return: The new head or NULL
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	while (*head)
	{
		prev = *head;
		*head = (*head)->next;
		next = (*head)->next;
		(*head)->next = prev;
		*head = next;
	}
	return (*head);
}
