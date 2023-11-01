#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node on the right side. Replaces
 *			      existing node if it exists.
 * @parent: The node to be inserted on
 * @value: The value of the ndoe
 *
 * Return: Pointer to new node or NULL if failed
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}

	return (new_node);
}
