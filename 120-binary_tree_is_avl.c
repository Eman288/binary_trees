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


/**
 * binary_tree_height_2 - a function that measures the height of a binary tree
 * @tree: the root node we will measure from
 * Return: the height of the tree from the node
 */

size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_2(tree->left);
	right_height = binary_tree_height_2(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance of the tree, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_2(tree->left);
	right_height = binary_tree_height_2(tree->right);

	return (left_height - right_height);
}


/**
 * binary_tree_is_avl - Checks if abinary tree is a valid AVL Tree
 * @tree: Pointer to teh root of the tree
 *
 * Return: 1 if is valid, 0 if not valid(or tree is NULL)
 */

int binary_tree_is_avl(const binary_tree_t *tree)
{
	int balance;
	int is_bst;

	if (tree == NULL)
		return (0);

	balance = binary_tree_balance(tree);
	is_bst = binary_tree_is_bst(tree);

	if ((balance == 1 || balance == 0 || balance == -1) && is_bst == 1)
		return (1);
	else
		return (0);
}
