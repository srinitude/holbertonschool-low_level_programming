#include "lists.h"

/**
 * _strlen - Computes length of string
 * @str: The string in question
 *
 * Return: The length of the string or 0
 *
 */

int _strlen(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * create_node - Creates a new node for list
 * @str: The string to add to new node
 *
 * Return: The new node or NULL
 *
 */

list_t *create_node(const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	return (new_node);
}

/**
 * add_node - Adds new node to head of list
 * @head: The address of the current head
 * @str: The string to create new node with
 *
 * Return: Pointer to new node/head
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t **current_head;
	list_t *new_head;

	if (head == NULL || str == NULL)
		return (NULL);
	current_head = head;
	new_head = create_node(str);
	if (new_head == NULL)
		return (new_head);
	new_head->next = *current_head;
	*head = new_head;
	return (new_head);
}
