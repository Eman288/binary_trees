#include "binary_trees.h"

/**
 * array_to_bst - Turns an array into a binary search tree
 * @array: The array
 * @size: size of the aray
 *
 * Return: pointer to teh root of the created bst
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t **tree = malloc(sizeof(bst_t));
	size_t i;

	binary_tree_node(*tree, array[0]);

	for (i = 1; i < size; i++)
		bst_insert(tree, array[i]);

	return (*tree);
}
