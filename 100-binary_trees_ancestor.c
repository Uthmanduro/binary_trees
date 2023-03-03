#include "binary_trees.h"
/** 
 * binary_trees_ancestor - finds the lowest common ancestor of towo nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (first->parent && second->parent)
	{
		binary_trees_ancestor(first->parent, second->parent);
		if (first->parent == second->parent)
			return (first->parent);
	}
	return (NULL);
}
