#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node as left child of another
 * @parent: The parent to insert new node within
 * @value: The value to create new node with
 *
 * Return: Pointer to new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *new_node_child = NULL;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->left)
		new_node_child = parent->left;
	parent->left = new_node;
	new_node->left = new_node_child;
	return (new_node);
}
