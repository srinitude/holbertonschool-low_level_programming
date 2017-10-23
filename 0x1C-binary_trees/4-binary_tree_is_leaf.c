#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks to see if a node is a leaf
 * @node: The node in question
 *
 * Return: 0 or 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
