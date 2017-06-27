#include "lists.h"

/**
 * get_node_at_index - Traverse to the indicated index
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
		if (i < idx)
		{
			if (temp->next == NULL)
				return (NULL);
			temp = temp->next;
		}
	}
	return (temp);
}

/**
 * create_new_node - Create a new node
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
	listint_t *prev_node;
	listint_t *next_node;
	listint_t *current_head;

	if (head == NULL)
		return (NULL);
	new_node = create_new_node(n);
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		if (*head == NULL)
			*head = new_node;
		else
		{
			current_head = *head;
			new_node->next = current_head;
			*head = new_node;
		}
	}
	prev_node = get_node_at_index(head, (idx - 1));
	if (prev_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	next_node = get_node_at_index(head, idx);
	prev_node->next = new_node;
	if (next_node)
		new_node->next = next_node;
	return (new_node);
}
