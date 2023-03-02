#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int countleft = 0, countright = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	if (tree->left)
	{
		countleft++;
		countleft += binary_tree_is_perfect(tree->left);
	}
	if (tree->right)
	{
		countright++;
		countright += binary_tree_is_perfect(tree->right);
	}
	if (countleft == countright)
		return (1);
	return (0);
}
