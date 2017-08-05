#include "lists.h"

/**
 * create_new_node - Creates a new node
 * @n: The data to instantiate with
 * @prev: Reference to previous node
 * @next: Reference to next node
 *
 * Return: Address of the new node or NULL
 */
dlistint_t *create_new_node(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *node = NULL;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = prev;
	node->next = next;

	return (node);
}

/**
 * get_node_at_index - Gets the node at an index
 * @head: Head of the linked list
 * @index: The index of the node to get
 *
 * Return: The address of the node or NULL
 */
dlistint_t *get_node_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (; i < index; i++)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}
	return (head);
}

/**
 * insert_dnodeint_at_index - Insert node at an index
 * @h: Head of the list
 * @idx: The index to insert the new node
 * @n: The data to instantiate the new node with
 *
 * Return: Address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *current = NULL, *previous = NULL;

	if (h == NULL)
		return (NULL);
	new_node = create_new_node(n, NULL, NULL);
	if (new_node == NULL)
		return (NULL);
	if (*h == NULL)
	{
		*h = new_node;
		return (*h);
	}
	current = get_node_at_index(*h, idx);
	if (current == NULL)
	{
		previous = get_node_at_index(*h, idx - 1);
		if (previous)
		{
			previous->next = new_node;
			new_node->prev = previous;
			return (new_node);
		}
		free(new_node);
		return (NULL);
	}
	previous = current->prev;
	if (previous == NULL)
	{
		new_node->next = current;
		current->prev = new_node;
		*h = new_node;
		return (*h);
	}
	previous->next = new_node;
	new_node->prev = previous;
	new_node->next = current;
	current->prev = new_node;
	return (new_node);
}
