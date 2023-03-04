#include "binary_trees.h"
/**
 * array_to_bst - builds a binary search tree from an array
 * @array: pointer to the first element of the array
 * @size: number of element in the array
 * Return: pointer to the root node of the created BST
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}
	return (root);
}
