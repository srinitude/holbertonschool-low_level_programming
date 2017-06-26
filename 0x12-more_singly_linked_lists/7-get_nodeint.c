#include "lists.h"

/**
 * get_nodeint_at_index - Get the node at an index
 * @head: The head node
 * @index: The index to retrieve a node from
 *
 * Return: The node at that index or NULL
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		if (i < index)
			head = head->next;
	}
	return (head);
}
