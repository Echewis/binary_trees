#include "binary_trees.h"

/**
 * binary_tree_insert_right - will insert a node to the right
 * *@parent: pointer to ther node that will insert to the right-child
 * @value: the value that will be stored
 * Return: Null if the parent is null
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
