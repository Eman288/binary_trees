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

	if (parent == NULL && grandpa == NULL)
		return (NULL);

	if (grandpa->left == parent && grandpa->right != NULL)
		uncle = grandpa->right;
	else if (grandpa->right == parent && grandpa->left != NULL)
		uncle = grandpa->left;
	else
		return (NULL);
	return (uncle);
}
