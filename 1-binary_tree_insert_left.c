#include "binary_trees.h"

/**
 * binary_tree_insert_left - will insert a node to the left child
 * @parent: A pointer to the node to be inserted to the left child
 * @value: The value to be stored in the node
 * Return: Null if the parent is null ot error
**/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->new = mew;

	return (new);
}
