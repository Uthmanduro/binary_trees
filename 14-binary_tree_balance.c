#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: always 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int countleft;
	int countright;

	if (!tree)
		return (0);
	countleft = binary_tree_height(tree->left);
	countright = binary_tree_height(tree->right);
	if (countleft >= countright)
		return (countleft + 1);
	else
		return (countright + 1);
}
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
	countleft = binary_tree_height(tree->left);
	countright = binary_tree_height(tree->right);
	return (countleft - countright);
}

