#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node in a binary tree.
 *
 * @node: Pointer to the node to find the sibling of.
 *
 * Return: NULL if node is NULL or no sibling; otherwise, a ptr to the sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
