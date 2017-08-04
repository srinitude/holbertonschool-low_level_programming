#include "lists.h"

/**
 * create_node - Creates a new node
 * @n: The data
 * @prev: The previous node
 * @next: The next node
 *
 * Return: The address of the node or NULL
 */
dlistint_t *create_node(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = prev;
	node->next = next;

	return (node);
}

/**
 * traverse_to_tail - Traverses to tail of list
 * @head: The head of the list
 *
 * Return: Adddress of the tail node
 */
dlistint_t *traverse_to_tail(dlistint_t *head)
{
	size_t i;

	for (i = 0; head->next; i++)
	{
		if (head->next)
			head = head->next;
	}
	return (head);
}

/**
 * add_dnodeint_end - Add node to the tail of list
 * @head: The head of the list
 * @n: The data to instantiate new node with
 *
 * Return: The new node's address or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *current_tail = NULL;

	if (head == NULL)
		return (NULL);
	new_node = create_node(n, NULL, NULL);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	current_tail = traverse_to_tail(*head);
	current_tail->next = new_node;
	new_node->prev = current_tail;
	return (new_node);
}
