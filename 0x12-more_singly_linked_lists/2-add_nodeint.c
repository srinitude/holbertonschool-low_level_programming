#include "lists.h"

/**
 * create_node - Creates a new node
 * @n: The value of the new node
 *
 * Return: Address of the new node
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
 * add_nodeint - Adds a new node to the head of list
 * @head: The address of the current head or NULL
 * @n: The value of the new node
 *
 * Return: The address of the new node
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_head;

	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new_node;
	else
	{
		current_head = *head;
		new_node->next = current_head;
		*head = new_node;
	}
	return (*head);
}
