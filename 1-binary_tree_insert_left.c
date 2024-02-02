#include "binary_trees.h"

/**
 * binary_tree_insert_left - Adds a node as the left child of
 *                          another node within a binary tree.
 *
 * @parent: A pointer to the node where the left child is inserted.
 * @value: The value to be stored in the new node.
 *
 * Return: If parent is NULL or an error occurs, it returns NULL.
 *         Otherwise, it returns a pointer to the newly inserted node.
 *
 * Description: If the parent node already has a left child, the new node
 *              replaces it, and the former left child becomes the left
 *              child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
