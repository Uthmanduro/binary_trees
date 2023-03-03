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

        if (!tree || (!tree->left && !tree->right))
                return (0);
        countleft = binary_tree_height(tree->left);
        countright = binary_tree_height(tree->right);
        if (countleft >= countright)
                return (countleft + 1);
        else
                return (countright + 1);
}
/**
 * binary_tree_levelorder - goes through a binary using level-order trversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;
	if (!tree || !func)
		return;
	height = binary_tree_height(tree);
	func(tree-n);
	for (i = 0; i < height; i++)
	{
		func(tree->left->n);
		func(tree->right->n);
	}
	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);
}
