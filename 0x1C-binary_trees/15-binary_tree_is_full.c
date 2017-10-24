#include "binary_trees.h"

/**
 * binary_tree_is_full - Indicates whether tree is full
 * @tree: The tree in question
 *
 * Return: True (1) or false (0)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *l = NULL, *r = NULL;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	l = tree->left;
	r = tree->right;
	if (l && r)
		return (binary_tree_is_full(l) && binary_tree_is_full(r));
	return (0);
}
