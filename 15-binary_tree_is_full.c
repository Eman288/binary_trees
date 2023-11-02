#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: the root node
 * Return: 1 if it is full, 0 is not
 */

int check(const binary_tree_t *tree, int i)
{
	int j;

	if (tree != NULL)
	{
		if (tree->left && tree->right && tree->parent != NULL)
			j = 0;
		else
			j = 1;
		i += j;
		check(tree->left, i);
		check(tree->right, i);
	}
	return (i);
}

int binary_tree_is_full(const binary_tree_t *tree)
{
	int i = 0;
	if(tree != NULL)
	{
		if (check(tree, i) == 0)
			return (1);
		else
			return (0);
	}
	return (1);
}
