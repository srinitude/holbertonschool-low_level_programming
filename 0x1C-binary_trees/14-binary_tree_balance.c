#include "binary_trees.h"

/**
 * binary_tree_height - Calculates height of a binary tree
 * @tree: The tree in question
 *
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *right = NULL, *left = NULL;
	size_t right_height = 0, left_height = 0;

	if (!tree)
		return (0);
	left = tree->left;
	right = tree->right;
	left_height = binary_tree_height(left);
	right_height = binary_tree_height(right);
	if (left_height > right_height)
		return (1 + left_height);
	else if (right_height > left_height)
		return (1 + right_height);
	return (1 + left_height);
}

/**
 * binary_tree_balance - Finds the balance of a binary tree
 * @tree: The tree in question
 *
 * Return: The difference
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	binary_tree_t *left = NULL, *right = NULL;
	int diff = 0, left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	left = tree->left;
	right = tree->right;
	left_height = binary_tree_height(left);
	right_height = binary_tree_height(right);
	diff = left_height - right_height;
	return (diff);
}
