#include "binary_trees.h"

/**
 * ancestor - Find nearest ancestor
 * @f: The first tree
 * @s: The second tree
 * @c: Counter
 *
 * Return: Pointer to nearest or NULL
 */
binary_tree_t *ancestor(binary_tree_t *f, binary_tree_t *s, size_t c)
{
	if (!f || !s)
		return (NULL);
	if (f == s)
		return (f);
	if (c % 2)
		return (ancestor(f->parent, s, c + 1));
	else
		return (ancestor(f, s->parent, c + 1));
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
	return (ancestor(first, second, 0));
}
