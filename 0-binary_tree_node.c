#include "binary_trees.h"
/**
 * binary_tree_node - creates a new node
 * @parent: pointer to the parent of the node to create
 * @value: value to put in the new node
 * Return: a pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));
	if (!temp)
		return (NULL);
	temp->parent = parent;
	temp->n = value;
	temp->left = temp->right = NULL;
	return (temp);
}
