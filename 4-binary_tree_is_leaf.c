#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a given node has no children (Is a leaf)
 * @node: The ndoe to be checked
 *
 * Return: 1 if a leaf, 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
