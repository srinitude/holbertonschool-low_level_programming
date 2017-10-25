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
	if (!tree->left && !tree->right)
		return (1);
	left = tree->left;
	right = tree->right;
	left_height = binary_tree_height(left);
	right_height = binary_tree_height(right);
	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
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

/**
 * binary_tree_is_perfect - Checks to see if it's a pefect binary tree
 * @tree: The tree in question
 *
 * Return: True or false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance = 0, fullness = 0;

	if (!tree)
		return (0);
	balance = binary_tree_balance(tree);
	fullness = binary_tree_is_full(tree);
	if (fullness && (!balance))
		return (1);
	return (0);
}
