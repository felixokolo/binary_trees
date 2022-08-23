#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a
 * node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL on
 * failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	return NULL;
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	return NULL;
	new->parent = parent;
	new->n = value;
	if (parent->left == NULL)
	{
		parent->left = new;
		new->left = NULL;
	}
	else
	{
		new->left = parent->left;
		parent->left = new;
	}
	new->right = NULL;
	return new;
}
