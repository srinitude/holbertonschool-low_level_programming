#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a binary tree
 * @tree: The tree in question
 *
 * Return: The size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	binary_tree_t *left = NULL, *right = NULL;
	size_t total = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left = tree->left;
	right = tree->right;
	total = 1 + binary_tree_size(left) + binary_tree_size(right);
	return (total);
}
