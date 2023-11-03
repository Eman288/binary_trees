#include "binary_trees.h"

int is_bst_helper(const binary_tree_t *tree, int min, int max);

/**
 * binary_tree_is_bst - checks if a binary tree is a valid binary search tree
 * @tree: Pointer to the root of the tree
 *
 * Return: 1 if it's valid, 0 if not
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	return (is_bst_helper(tree, -10000, 10000));
}

/**
 * is_bst_helper - handles the recursion for binary_tree_is_bst
 * @tree: Pointer to the root of the node
 * @min: Minimum
 * @max: Max
 *
 * Return: 1 or 0
 */

int is_bst_helper(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);

	return (is_bst_helper(tree->left, min, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, max));
}
