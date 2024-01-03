#include "binary_trees.h"

/**
 * binary_tree_balance - Measure the balance factors of the binary tree
 * @tree: Pointer to the root node
 * Return: 0 if the tree is Null
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)

		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root of the tree
 * Return: 0 if the tree Null
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t le = 0, ri = 0;

		le = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		ri = tree->right ? 1 + binary_tree_height(tree->left) : 1;
		return ((le > ri) ? le : ri);
	}
	return (0);
}
