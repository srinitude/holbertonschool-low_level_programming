#include "lists.h"

/**
 * instantiate_node - Creates a new node
 * @n: The data to instantiate with
 * @prev: Reference to previous node
 * @next: Reference to next node
 *
 * Return: Address of the new node or NULL
 */
dlistint_t *instantiate_node(int n, dlistint_t *prev, dlistint_t *next)
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
 * add_dnodeint - Adds node to head of linked list
 * @head: Double pointer to head of linked list
 * @n: The number to instantiate the new head with
 *
 * Return: Address of the new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *current_head = NULL;

	if (head == NULL)
		return (NULL);
	new_node = instantiate_node(n, NULL, NULL);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	current_head = *head;
	current_head->prev = new_node;
	new_node->next = current_head;
	*head = new_node;
	return (*head);
}
