#include "binary_trees.h"
/**
 * bst_search - a function that searches for a value in a Binary Search Tree
 * @tree: the root
 * @value:
 * the value to search for
 * Return: the node
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	else if (value > tree->n)
		return (bst_search(tree->right, value));
	else
		return ((bst_t *)tree);
}
