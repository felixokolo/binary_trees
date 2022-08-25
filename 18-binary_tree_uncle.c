#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the
 * uncle of a node
 * @node: pointer to the node to check
 * Return: return 1 if node is a leaf, otherwise 0
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL)
	return (NULL);
	if (node->parent == NULL)
	return (NULL);
	if (node->parent->parent == NULL)
	return (NULL);
	tmp = node->parent->parent->right == node->parent ?
		node->parent->parent->left : node->parent->parent->right;
	return (tmp);
}
