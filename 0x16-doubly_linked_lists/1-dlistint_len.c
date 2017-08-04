#include "lists.h"

/**
 * dlistint_len - Computes length of list
 * @h: The head of the list
 *
 * Return: The length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
