#include "binary_trees.h"
/**
 * binary_tree_is_root - will check if s node is a root of a binary tree
 * @node: this is a pointer to the node that will be checked
 * Return: will return zero or one
 **/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node != NULL)
	{
		return (0);
	}
	return (1);
}
