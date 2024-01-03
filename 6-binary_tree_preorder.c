#include "binary_trees.h"

/**
 * binary_tree_preorder - will go through a binary tree in a pre-ioder form
 * @tree: pointer to the root node
 * @func: a pointer to the node each tik=me it is called
 **/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
