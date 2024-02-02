#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert node as the right child in a binary tree.
 *
 * @parent: Pointer to the target node for the right child.
 * @value: The value to store in the new node.
 *
 * Return: NULL if parent is NULL or error otherwise, a ptr to the new node.
 *
 * Description: Replaces the parent's existing right child with the new node,
 *              making the old right child the right child of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
