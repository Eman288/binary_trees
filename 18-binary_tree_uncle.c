#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: The nephew/niece
 *
 * Return: POinter to the uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandpa;
	binary_tree_t *uncle;

	if (node == NULL)
		return (NULL);
	parent = node->parent;
	grandpa = parent->parent;

	if (grandpa == NULL)
		return (NULL);

	if (parent == grandpa->right && grandpa->left != NULL)
		uncle = grandpa->left;
	else if (parent == grandpa->left && grandpa->right != NULL)
		uncle = grandpa->right;
	else
		return (NULL);
	return (uncle);
}
