#include "binary_trees.h"
/**
 * bst_insert - inserts a value in a binary search tree
 * @tree: double pointer to the root nodeof the bstto insert the value
 * @value: value to store in the node to be inserted
 * Return: pointer to the created node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *root = (*tree);

	if (!tree || !root)
		return (binary_tree_node(root, value));
	else if (value < root->left->n)
		root->left = bst_insert(&root->left, value);
	else if (value > root->right->n)
		root->right = bst_insert(&root->right, value);
	return (root);
}
