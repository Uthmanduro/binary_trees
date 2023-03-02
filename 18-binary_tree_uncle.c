#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node : pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *elder = node->parent;

	if (!node || !elder || !elder->parent || (!elder->parent->left ||
						  !elder->parent->right))
		return (NULL);
	if (elder == elder->parent->left)
		return (elder->parent->right);
	else
		return (elder->parent->left);
}
