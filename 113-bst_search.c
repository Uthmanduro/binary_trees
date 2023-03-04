#include "binary_trees.h"
/**
 * bst_search - search for a value in a bst
 * @tree: pointer to root node of the tree
 * @value: value to search
 * Return: pointer to the node
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	if (value < tree->n)
	{
		if (value == tree->left->n)
			return tree->left;
		bst_search(tree->left, value);
	}
	if (value > tree->n)
	{
		if (value == tree->right->n)
			return tree->right;
		bst_search(tree->right, value);
	}
	return (NULL);
}
