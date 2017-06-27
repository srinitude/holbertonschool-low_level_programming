#include "lists.h"

/**
 * traverse_to_index - Traverse to the indicated index
 * @head: The head of the list
 * @idx: The index to traverse to
 *
 * Return: Address of the node at the index
 *
 */

listint_t *get_node_at_index(listint_t **head, unsigned int idx)
{
	unsigned int i;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	for (i = 0; i <= idx; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		if (i < idx)
			temp = temp->next;
	}
	return (temp);
}

/**
 * create_node - Create a new node
 * @n: The value to instantiate with
 *
 * Return: Address of the new node or NULL
 *
 */

listint_t *create_new_node(int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	return (node);
}

/**
 * insert_nodeint_at_index - Inserts a node at an index
 * @head: The head of the list
 * @idx: The index to insert at
 * @n: The value to instantiate the node with
 *
 * Return: The new node at the indicated index
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *previous_node;
	listint_t *next_node;

	current_node = get_node_at_index(head);
	if (current_node == NULL)
		return (NULL);
	new_node = create_new_node(n);
	if (new_node == NULL)
		return (NULL);
	index_node = current_node;
	new_node->next = current_node;
	index_node = new_node;
	return (index_node);
}
