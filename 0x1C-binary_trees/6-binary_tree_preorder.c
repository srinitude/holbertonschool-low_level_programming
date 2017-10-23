#include "binary_trees.h"

/**
 * binary_tree_preorder - Do a pre-order travsersal
 * @tree: The tree to traverse
 * @func: The function to do on the data of the tree
 *
 * Return: None
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (!func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
