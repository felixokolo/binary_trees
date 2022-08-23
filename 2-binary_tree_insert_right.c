#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a
 * node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL on
 * failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	return NULL;
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	return NULL;
	new->parent = parent;
	new->n = value;
	if (parent->right == NULL)
	{
		parent->right = new;
		new->right = NULL;
	}
	else
	{
		new->right = parent->right;
		parent->right = new;
	}
	new->left = NULL;
	return new;
}
