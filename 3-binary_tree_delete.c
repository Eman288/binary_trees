#include "binary_trees.h"

/**
 * binary_tree_delete - a function that deletes an entire binary tree
 * @tree: the root node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *t;

	while (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		t = tree;
		free(t);
		return;
	}
}
