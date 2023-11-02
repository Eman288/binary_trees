#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: The nephew/niece
 *
 * Return: POinter to the uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->right == node->parent &&
			node->parent->parent->left != NULL)
		return (node->parent->parent->left);
	else if (node->parent->parent->left == node->parent &&
			node->parent->parent->right != NULL)
		return (node->parent->parent->right);
	else
		return (NULL);
}
