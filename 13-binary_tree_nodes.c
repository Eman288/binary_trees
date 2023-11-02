#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with at least 1 child 
 * in a binary tree
 * @tree: the node
 * Return: number of nodes
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i;

	i = 0;
	
	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		i += 1;
	i += binary_tree_nodes(tree->left);
	i += binary_tree_nodes(tree->right);
	return (i);
}
