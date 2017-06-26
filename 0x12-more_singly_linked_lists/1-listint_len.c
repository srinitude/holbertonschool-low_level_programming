#include "lists.h"

/**
 * listint_len - Computes number of nodes
 * @h: Head of the linked list
 *
 * Return: The number of total nodes
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}
