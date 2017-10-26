#include "binary_trees.h"

/**
 * ancestor - Find nearest ancestor
 * @f: The first tree
 * @s: The second tree
 * @c: Counter
 * @i: Index
 *
 * Return: 
 */
void ancestor(binary_tree_t *f, binary_tree_t *s, binary_tree_t **arr, size_t i)
{
	if (!f || !s)
	{
		arr[i] = NULL;
		return;
	}
	if (f == s)
	{
		arr[i] = f;
		return;
	}
	if (i % 2)
	{
		arr[i] = f;
		ancestor(f->parent, s, arr, i + 1);
	}
	else
	{
		arr[i] = s;
		ancestor(f, s->parent, arr, i + 1);
	}
}

/**
 * binary_trees_ancestor - Find nearest ancestor
 * @first: The first tree
 * @second: The second tree
 *
 * Return: Pointer to nearest or NULL
 */
binary_tree_t
*binary_trees_ancestor(binary_tree_t *first, binary_tree_t *second)
{
	size_t i = 0;
	binary_tree_t *previous = NULL;
	binary_tree_t **arr = NULL;

	arr = malloc(sizeof(binary_tree_t *) * 100);
	if (!arr)
		return (NULL);
	for (i = 0; i < 100; i++)
		arr[i] = NULL;
	ancestor(first, second, arr, 0);
	for (i = 0; arr[i]; i++)
	{
		if (i == 0)
			previous = arr[i];
		else
		{
			previous = arr[i - 1];
			if (previous == arr[i])
				return (previous);
		}
	}
	return (arr[i - 1]);
}
