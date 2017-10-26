#include "binary_trees.h"

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

binary_tree_t
*binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	return (ancestor((binary_tree_t *)first, (binary_tree_t *)second, 0));
}
