#include "binary_trees.h"

/**
 * check - Check to see if tree is full
 * @tree: The tree to check
 *
 * Return: True or False
 */
int check(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (!tree)
		return (FULL);
	if (!((tree->left && tree->right) || (!tree->left && !tree->right)))
		return (NOT_FULL);
	left = tree->left;
	right = tree->right;
	return (check(left) && check(right));
}

/**
 * binary_tree_is_full - Checks to see if a binary tree is full
 * @tree: The tree to check
 *
 * Return: True or False
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (NOT_FULL);
	return (check(tree));
}
