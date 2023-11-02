#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: the node to find its sibling
 * Return: the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *par;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	par = node->parent;
	if (par->left == node && par->right != NULL)
		return (par->right);
	else if (par->right == node && par->left != NULL)
		return (par->left);
	else
		return (NULL);
}
