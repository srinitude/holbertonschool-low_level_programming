#include "lists.h"

/**
 * list_len - Computes length of list
 * @h: Head of the linked list
 *
 * Return: Length of the list
 *
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
