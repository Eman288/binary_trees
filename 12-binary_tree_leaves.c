#include "binary_trees.h"

/**
 * binary_tree_leaves -Counts the leaves inside of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The numebr of leaves or NULL if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left = 0;
	size_t leaves_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);

	return (leaves_left + leaves_right);
}
