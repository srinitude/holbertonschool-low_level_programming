#include "lists.h"

/**
 * get_node_at_index - Gets node at index
 * @head: The head node
 * @idx: The index to retrieve
 *
 * Return: The node or NULL
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
 * delete_nodeint_at_index - Deletes node at an index
 * @head: The head node
 * @index: The index to delete at
 *
 * Return: Success (1) or failure (-1)
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node;
	listint_t *prev_node;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return (FAILURE);
	del_node = get_node_at_index(head, index);
	if (del_node == NULL)
		return (FAILURE);
	next_node = get_node_at_index(head, index + 1);
	if (index == 0)
	{
		free(del_node);
		if (next_node)
			*head = next_node;
		return (SUCCESS);
	}
	prev_node = get_node_at_index(head, index - 1);
	prev_node->next = NULL;
	free(del_node);
	if (next_node)
		prev_node->next = next_node;
	return (SUCCESS);
}
