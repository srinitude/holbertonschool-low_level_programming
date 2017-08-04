#include "lists.h"

/**
 * print_dlistint - Print out all elements of a list
 * @h: The head of a list
 *
 * Return: The number of elements in a list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
