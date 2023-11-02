#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: the root node we will measure from
 * Return: the height of the tree from the node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t height, height1, height2;

        height1 = 0;
        height2 = 0;
        if (tree == NULL)
                return (0);

        if (tree->left != NULL)
        {
                height1 = 1 + binary_tree_height(tree->left);
        }
        else
        {
                height1 = 0;
        }
        if (tree->right != NULL)
        {
                height2 = 1 + binary_tree_height(tree->right);
        }
        else
        {
                height2 = 0;
        }
        if (height1 > height2)
        {
                height = height1;
        }
        else
        {
                height = height2;
        }
        return (height);
}


/**
 * print_current_level - Prints all nodes that are ont he current level
 * @tree: The root of the current recursive version of the tree
 * @i: The level
 *
 * Return: None
 */

void print_current_level(const binary_tree_t *tree, size_t i, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (i == 0)
		func(tree->n);
	else if(i > 0)
	{
		print_current_level(tree->left, i - 1, func);
		print_current_level(tree->right, i - 1, func);
	}
}

/**
 * binary_tree_levelorder - Goes through a tree using levelorder traversal
 * @tree: POinter to the root of the tree
 * @func: The function to use on each node
 *
 * Return: None
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h = binary_tree_height(tree), i;

	for (i = 0; i <= h; i++)
		print_current_level(tree, i, func);
}
