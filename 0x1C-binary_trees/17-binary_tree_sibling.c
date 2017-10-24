#include "binary_trees.h"
#define RIGHT 0
#define LEFT 1

/**
 * binary_tree_sibling - Finds sibling of a node
 * @node: The node
 *
 * Return: Pointer to sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;
	int direction = 0;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	parent = node->parent;
	if (parent->right == node)
		direction = RIGHT;
	else
		direction = LEFT;
	if (direction == RIGHT)
		return (parent->left);
	return (parent->right);
}
