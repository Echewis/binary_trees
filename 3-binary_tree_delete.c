#include "binary_trees.h"

/**
 * binary_tree_delete - will delete a binary tree
 * @tree: a pointer to the root node of a tree that will be deleted
 **/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
