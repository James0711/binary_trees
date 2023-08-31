#include "binary_trees.h"

/**
 * array_to_bst - Builds a binary search tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created BST, or NULL upon failure.
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t r, s;

	if (array == NULL)
		return (NULL);

	for (r = 0; r < size; r++)
	{
		for (s = 0; s < r; s++)
		{
			if (array[s] == array[r])
				break;
		}
		if (s == r)
		{
			if (bst_insert(&tree, array[r]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
