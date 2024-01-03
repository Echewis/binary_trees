#include "binary_trees.h"
/**
 * binary_tree_depth - will measure the dept of a node
 * @tree: Pointer to the nade that will be measured
 * Return: 0 if tree is Null
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
