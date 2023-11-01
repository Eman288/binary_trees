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


/**
 * binary_tree_is_perfect - Cjecks if a binary tree is perfect
 * @tree: Pointer to the root of the tree
 *
 * Return: 1 if perfect, 0 if not(or tree is NULL)
 */

int  binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
		return (1);

	return (0);
}
