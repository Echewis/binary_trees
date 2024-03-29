#include "binary_trees.h"
/**
 * binary_tree_is_leaf - this will check if node is aleaf of binary tree
 * @node: This is pointer to the nood to be checked
 * Return: -1 if the node is a leaf, -0 if otherwise
 **/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
