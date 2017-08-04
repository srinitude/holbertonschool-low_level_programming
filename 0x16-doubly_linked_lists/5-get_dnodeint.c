#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node at an index
 * @head: Head of the linked list
 * @index: The index of the node to get
 *
 * Return: The address of the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index; i++)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}
	return (head);
}
