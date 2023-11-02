#include "binary_trees.h"

/**
 * check - a function that checks for the fullness of a node
 * @tree: the nide
 * Return: 1 if it is full, 0 is not
 */

int check(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left == NULL && tree->right != NULL) ||
				(tree->left != NULL && tree->right == NULL)
				|| (check(tree->left) == 0) ||
				(check(tree->right) == 0))
			return (0);
	}
	return (1);
}
/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: the root node
 * Return: 1 if it is full, 0 is not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree ==  NULL)
	{
		return (0);
	}
	return (check(tree));
}
