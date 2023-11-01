#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: the root node we will measure from
 * Return: the height of the tree from the node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, height1, height2;

	height1 = 0;
	height2 = 0;
	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		height1 = 1 + binary_tree_height(tree->left);
	}
	else
	{
		height1 = 0;
	}
	if (tree->right != NULL)
	{
		height2 = 1 + binary_tree_height(tree->right);
	}
	else
	{
		height2 = 0;
	}
	if (height1 > height2)
	{
		height = height1;
	}
	else
	{
		height = height2;
	}
	return (height);
}
