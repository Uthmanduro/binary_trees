#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: always 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int countdepth;

	if (!tree || !tree->parent)
		return (0);
	countdepth = binary_tree_depth(tree->parent);
	return (countdepth + 1);
}
