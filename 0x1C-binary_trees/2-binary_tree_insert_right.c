#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert node as right child of another node
 * @parent: The parent node to insert child in
 * @value: The value to give the new node
 *
 * Return: Pointer to new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *original_child = NULL;

	if (!parent)
		return (NULL);
	if (parent->right)
		original_child = parent->right;
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	parent->right = new_node;
	if (original_child)
	{
		new_node->right = original_child;
		original_child->parent = new_node;
	}
	return (new_node);
}
