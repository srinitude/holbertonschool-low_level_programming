#include "sort.h"

/**
 * back - Traverse backwards and swap
 * @stop: The node to stop at
 * @compare: The node to compare
 *
 * Return: None
 */
void back(listint_t *stop, listint_t *compare)
{
	listint_t *previous = NULL, *pp = NULL, *nn = NULL;

	previous = compare->prev;
	while (previous)
	{
		if (previous->n > compare->n)
		{
			pp = previous->prev;
			nn = compare->next;
			compare->next = previous;
			if (!pp)
				stop = pp;
			else
				compare->prev = pp;
			previous->prev = compare;
			previous->next = nn;
			nn->prev = previous;
			if (pp)
				pp->next = compare;
			else
				stop->next = previous;
			print_list((const listint_t *)stop);
		}
		else
			return;
		previous = compare->prev;
	}
}

/**
 * insertion_sort_list - Insertion sort implementation
 * @list: Pointer to the address of head node
 *
 * Return: None
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *next = NULL;

	if (!list || !(*list) || !((*list)->next))
		return;

	current = *list;
	while (current->next)
	{
		next = current->next;
		back(*list, next);
		current = next;
	}
}
