#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node at the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to be stored in the new node
 * Return: a pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (parent->left)
	{
		tmp = parent->left;
		parent->left = newnode;
		newnode->left = tmp;
		tmp->parent = newnode;
	}
	else
		parent->left = newnode;
	return (newnode);
}
