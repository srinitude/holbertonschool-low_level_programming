#include "binary_trees.h"

/**
 * binary_tree_delete - Frees the entire tree
 * @tree: The tree to free
 *
 * Return: None
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *right = NULL, *left = NULL;

	if (!tree)
		return;
	left = tree->left;
	right = tree->right;
	binary_tree_delete(left);
	binary_tree_delete(right);
	free(tree);
}
