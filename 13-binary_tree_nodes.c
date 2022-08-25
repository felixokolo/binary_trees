#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the
 * nodes with at least 1 child in a binary tree.
 * @tree: pointer to the root node of the tree
 * to count the number of nodes
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
	return (0);
	if (tree->left != NULL || tree->right != NULL)
	nodes++;
	if (tree->left != NULL)
	{
		nodes += binary_tree_nodees(tree->left);
	}
	if (tree->right != NULL)
	{
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
