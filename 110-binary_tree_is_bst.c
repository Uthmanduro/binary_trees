#include "binary_trees.h"
/**
 * issubtreelesser - checks if subtree is lesser
 * @tree: tree to check
 * @value: value of the pointer to tree
 * Return: 1 if valid and 0 if not
 */
int issubtreelesser(binary_tree_t *tree, int value)
{
	if (!tree)
		return (0);
	if (tree->n < value && issubtreelesser(tree->left, value) && issubtreelesser(tree->left, value))
		return (1);
	else
		return (0);
}
/**
 * issubtreegreater - checks if subtree is lesser
 * @tree: tree to check
 * @value: value of the pointer to tree
 * Return: 1 if valid and 0 if not
 */
int issubtreegreater(binary_tree_t *tree, int value)
{
        if (!tree)
                return (0);
        if (tree->n > value && issubtreegreater(tree->left, value) && issubtreegreater(tree->left, value))
                return (1);
        else
                return (0);
}
/**
 * binary_tree_is_bst - Checks if a binary tree is a valid BST.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if `tree` is a valid BST, 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (issubtreelesser(tree->left, tree->n) && issubtreegreater(tree->right, tree->n) &&
	    binary_tree_is_bst(tree->left) && binary_tree_is_bst(tree->right))
		return (1);
	else
		return (0);
}
