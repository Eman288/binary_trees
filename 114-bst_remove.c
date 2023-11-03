#include "binary_trees.h"

/**
 * search - a function that searches for a value in a Binary Search Tree
 * @tree: the root
 * @value:
 * the value to search for
 * Return: the node
 */

bst_t *search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (value < tree->n)
		return (search(tree->left, value));
	else if (value > tree->n)
		return (search(tree->right, value));
	else
		return ((bst_t *)tree);
}

/**
 * bst_remove - a function that removes a node from a Binary Search Tree
 * @root: the root of the tree
 * @value: the value of the node to remove
 * Return: a pointer to the new root node of the tree after removing
 * the desired value
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *node, *ro;

	ro = root;
	node = search(root, value);
	if (node == NULL)
		return (NULL);
	if (node->left == NULL && node->right == NULL)
		free(node);
	else if (node->left == NULL && node->parent->right == node)
	{
		node->parent->right = node->right;
		free(node);
	}
	else if (node->left == NULL && node->parent->left == node)
	{
		node->parent->left = node->right;
		free(node);
	}
	else if (node->right == NULL && node->parent->right == node)
	{
		node->parent->right = node->left;
		free(node);
	}
	else if (node->right == NULL && node->parent->left == node)
	{
		node->parent->right = node->right;
		free(node);
	}
	else
	{
		free(node);
	}
	return (ro);
}
