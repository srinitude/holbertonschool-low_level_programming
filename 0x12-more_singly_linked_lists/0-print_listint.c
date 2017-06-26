#include "lists.h"

/**
 * print_listint - Prints the int data from list nodes
 * @h: Head of the list
 *
 * Return: The number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (nodes);
}
