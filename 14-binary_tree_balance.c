#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int countleft = 0, countright = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	if (tree->left)
	{
		countleft++;
		countleft += binary_tree_balance(tree->left);
	}
	if (tree->right)
	{
		countright++;
		countright += binary_tree_balance(tree->right);
	}
	return (countleft - countright);
}