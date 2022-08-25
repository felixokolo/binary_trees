#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the
 * sibling of a node
 * @node: pointer to the node to check
 * Return: return 1 if node is a leaf, otherwise 0
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL)
	return (NULL);
	if (node->parent == NULL)
	return (NULL);
	tmp = node->parent->right == node ?
		node->parent->left : node->parent->right;
	return (tmp);
}
