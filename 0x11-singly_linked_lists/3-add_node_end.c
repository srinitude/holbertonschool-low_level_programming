#include "lists.h"

/**
 * traverse_to_tail - Traverse of the tail of the list
 * @head: The head of the list
 *
 * Return: The tail node of the list
 */

list_t *traverse_to_tail(list_t **head)
{
	size_t i;
	list_t *tail;

	if (*head == NULL)
		return (NULL);
	tail = *head;
	for (i = 0; tail; i++)
	{
		if (tail->next == NULL)
			return (tail);
		tail = tail->next;
	}
	return (tail);
}

/**
 * _strlen - Computes the length of a string
 * @str: The string in question
 *
 * Return: The length of the string
 *
 */

size_t _strlen(const char *str)
{
	size_t i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * create_node - Creates a new linked list node
 * @str: The string to create a new node with
 *
 * Return: The new node or NULL
 */

list_t *create_node(const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = _strlen(str);
	return (node);
}

/**
 * add_node_end - Add node to tail of linked list
 * @head: The head of the list
 * @str: The string to use in creating a new node
 *
 * Return: The new tail of the linked list
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_tail;
	list_t *new_tail;

	if (head == NULL || str == NULL)
		return (NULL);
	current_tail = traverse_to_tail(head);
	new_tail = create_node(str);
	if (current_tail == NULL)
	{
		*head = new_tail;
		return (*head);
	}
	else
		current_tail->next = new_tail;
	return (new_tail);
}
