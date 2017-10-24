#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates height of a binary tree
 * @tree: The tree in question
 *
 * Return: The depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
