#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the lowest common ancestor
 * of two nodes
 * @first: the first node
 * @second: the second node
 * Return: the Lowest common ancestor or NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	if (second->parent == first || first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return (first->parent);
	if (first == second->parent || first->parent != NULL)
		return (binary_trees_ancestor(first, second->parent));
	else if (second == first->parent || second->parent != NULL)
		return (binary_trees_ancestor(first->parent, second));
	return (binary_trees_ancestor(first->parent, second->parent));
}
