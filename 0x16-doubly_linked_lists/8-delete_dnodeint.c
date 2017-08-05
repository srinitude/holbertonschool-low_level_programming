#include "lists.h"

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
 * delete_dnodeint_at_index - Deletes a node at index
 * @head: Double pointer to head of list
 * @index: The index to delete the node
 *
 * Return: SUCCESS or FAILURE
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = NULL;
	dlistint_t *previous_node = NULL, *next_node = NULL;

	if (head == NULL)
		return (FAILURE);
	current_node = get_node_at_index(*head, index);
	if (current_node == NULL)
		return (FAILURE);
	previous_node = current_node->prev;
	next_node = current_node->next;
	if (previous_node == NULL)
	{
		if (next_node)
		{
			next_node->prev = NULL;
			*head = next_node;
		}
		else
			*head = NULL;
		free(current_node);
		return (SUCCESS);
	}
	if (next_node == NULL)
	{
		previous_node->next = NULL;
		free(current_node);
		return (SUCCESS);
	}
	previous_node->next = next_node;
	next_node->prev = previous_node;
	free(current_node);
	return (SUCCESS);
}
