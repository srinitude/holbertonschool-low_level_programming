#include "binary_trees.h"

/**
 * binary_tree_postorder - Does a post-order traversal on a tree
 * @tree: The tree to traverse
 * @func: The function to invoke
 *
 * Return: None
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (!func)
		return;
	binary_tree_postorder(tree->left, func); 
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
