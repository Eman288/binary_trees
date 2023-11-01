#include "binary_trees.h"

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
