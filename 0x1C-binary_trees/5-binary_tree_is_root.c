#include "binary_trees.h"

/**
 * binary_tree_is_root - Tests to see if the node is a root
 * @node: The node in question
 *
 * Return: None
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
