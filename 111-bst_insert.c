#include "binary_trees.h"
/**
 * bst_insert - inserts a value in a binary search tree
 * @tree: double pointer to the root nodeof the bstto insert the value
 * @value: value to store in the node to be inserted
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (!(*tree))
		(*tree) = binary_tree_node((*tree), value);
	else if (value < (*tree)->left->n)
		(*tree)->left = bst_insert(&(*tree).left, value);
	else if (value > (*tree)->right->n)
		(*tree)->right = bst_insert(&(*tree).right, value);
	return (*tree);
}
