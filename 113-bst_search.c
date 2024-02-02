#include "binary_trees.h"

/**
 * bst_search - Search for a value in a BST.
 *
 * @tree: Pointer to the root node of the BST to search.
 * @value: The value to look for.
 *
 * Return: NULL if the tree NULL or value not found), else ptr to value's node
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
