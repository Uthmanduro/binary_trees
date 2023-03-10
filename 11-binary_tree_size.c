#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int countleft, countright;

	if (!tree)
		return (0);
	countleft = binary_tree_size(tree->left);
	countright = binary_tree_size(tree->right);
	return (countleft + countright + 1);
}
