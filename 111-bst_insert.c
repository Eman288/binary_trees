#include "binary_trees.h"

/**
 * bst_insert - a function that inserts a value in a Binary Search Tree
 * @tree: the root
 * @value: the value to be insearted
 * Return: a pointer to the created node,
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *root, *node;

	root = *tree;
	if (tree == NULL)
		return (NULL);
	if (root == NULL)
	{
		node = binary_tree_node(root, value);
		if (!node)
			return (NULL);
		*tree = node;
		return (node);
	}
	if (value < root->n)
	{
		if (root->left != NULL)
		{
			return (bst_insert(&root->left, value));
		}
		node = binary_tree_node(root, value);
		if (!node)
			return (NULL);
		root->left = node;
		return (node);
	}
	else if (value > root->n)
	{
		if (root->right != NULL)
		{
			return (bst_insert(&root->right, value));
		}
		node = binary_tree_node(root, value);
		if (!node)
			return (NULL);
		root->right = node;
		return (node);
	}
	return (NULL);
}
