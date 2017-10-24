#include "binary_trees.h"

/**
 * binary_tree_nodes - Number of nodes with at least 1 child
 * @tree: The tree in question
 *
 * Return: The number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	binary_tree_t *left = NULL, *right = NULL;
	size_t total = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	left = tree->left;
	right = tree->right;
	total = 1 + binary_tree_nodes(left) + binary_tree_nodes(right);
	return (total);
}
