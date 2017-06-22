#include "lists.h"

/**
 * number_of_nodes - Returns number of nodes
 * @h: Head of linked list
 *
 * Return: The number of nodes
 */

size_t number_of_nodes(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}

/**
 * print_list - Prints out entirety of linked list
 * @h: Head of the linked list
 *
 * Return: The number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t i;
	int count;

	count = number_of_nodes(h);
	for (i = 0; h != NULL; i++)
	{
		printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
