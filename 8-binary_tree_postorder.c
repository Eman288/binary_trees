#include "binary_trees.h"

/**
 * binary_tree_postorder - Moves through a binary tree with a postorder
 *			   traversal
 * @tree: the root of the binary tree
 * @func: The function used on each node
 *
 * Return: None
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
