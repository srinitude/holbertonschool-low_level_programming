#include "binary_trees.h"
#define LEFT 0
#define RIGHT 1

/**
 * binary_tree_uncle - Finds the aunt of a node
 * @node: The node in question
 *
 * Return: Pointer to aunt or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL, *grandparent = NULL;
	unsigned short direction = 0;

	if (!node)
		return (NULL);
	parent = node->parent;
	if (!parent)
		return (NULL);
	grandparent = parent->parent;
	if (!grandparent)
		return (NULL);
	if (grandparent->left == parent)
		direction = LEFT;
	else
		direction = RIGHT;
	if (direction == LEFT)
		return (grandparent->right);
	return (grandparent->left);
}
