#include "lists.h"

/**
 * create_node - Creates a new node
 * @n: The value to instantiate with
 *
 * Return: The new node or NULL
 *
 */

listint_t *create_node(const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	return (node);
}

/**
 * traverse_to_tail - Traverses to end of list
 * @head: The head of the list
 *
 * Return: Address of the tail or NULL
 *
 */

listint_t *traverse_to_tail(listint_t **head)
{
	listint_t *tail;

	if (*head == NULL)
		return (NULL);
	tail = *head;
	while (tail->next)
	{
		tail = tail->next;
	}
	return (tail);
}

/**
 * add_nodeint_end - Adds node to tail of list
 * @head: The head of the list
 * @n: The value to instantiate a node with
 *
 * Return: Address of new element or NULL
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current_tail;
	listint_t *new_tail;

	new_tail = create_node(n);
	if (new_tail == NULL)
		return (NULL);
	current_tail = traverse_to_tail(head);
	if (current_tail == NULL)
	{
		*head = new_tail;
		return (*head);
	}
	else
		current_tail->next = new_tail;
	return (new_tail);
}
