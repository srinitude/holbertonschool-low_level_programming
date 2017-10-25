#include "binary_trees.h"

binary_tree_t
*binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (!first->parent || !second->parent)
		return (NULL);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	if (second->parent == first)
		return ((binary_tree_t *)first);
	binary_trees_ancestor(first->parent, second);
	binary_trees_ancestor(second->parent, first);
	return ((binary_tree_t *)first);
}
