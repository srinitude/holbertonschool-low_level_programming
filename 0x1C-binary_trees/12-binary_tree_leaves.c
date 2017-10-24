#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves in a binary tree
 * @tree: The tree in question
 *
 * Return: The number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	binary_tree_t *left = NULL, *right = NULL;
	size_t total = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left = tree->left;
	right = tree->right;
	if (left)
		total += 0 + binary_tree_leaves(left);
	if (right)
		total += 0 + binary_tree_leaves(right);
	return (total);
}
