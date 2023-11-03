#include "binary_trees.h"

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
 * binary_tree_balance - Calculates the baalancw factor of a binary tree
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
 * binary_tree_rotate_right - Rotates a binary tree to the right
 * @tree: Pointer to the root of the tree
 *
 * Return: Pointer to the root of the rotated tree
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;
	int balance = binary_tree_balance(tree);

	if (tree == NULL)
		return (NULL);

	if (balance >= 2)
	{
		new_root = tree->left;
		if (new_root == NULL)
			return (tree);

		tree->left = new_root->right;

		if (new_root->right)
			new_root->right->parent = tree;

		new_root->right = tree;
		new_root->parent = tree->parent;
		tree->parent = new_root;
	}

	return (new_root);
}
