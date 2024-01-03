#include "binary_trees.h"

/**
 * is_full_recursive - Measure the balance factors of the binary tree
 * @tree: Pointer to the root node
 * Return: 0 if the tree is Null
 **/
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
			(tree->left == NULL && tree->right != NULL) ||
			is_full_recursive(tree->left) == 0 ||
			is_full_resursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if the binary tree is filled
 * @tree: Pointer to the root of the tree
 * Return: 0 if the tree Null
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
