#include "binary_trees.h"

/**
 * binary_tree_node - this will create a binary tree node.
 * @parent: This is a pointer to the parent node to be created.
 * @value: The value to put in the
 *
 * Return: it will return null if error occurs
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
