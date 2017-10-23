#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a tree in order
 * @tree: The tree to traverse
 * @func: The function to invoke
 *
 * Return: None
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (!func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
