#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binray tree using pre-order traversal
 * @tree: pointer to the root if the tree
 * @func: Function toe xecute on each node
 *
 * Return: None
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
