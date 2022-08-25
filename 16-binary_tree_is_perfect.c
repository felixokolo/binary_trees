#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks
 * if a binary tree is full
 * @tree: pointer to the root node of the tree
 * to check
 * Return: 1 if full or 0 if NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 1;

	if (tree == NULL)
	return (0);
	if (tree->left != NULL)
	{
		if (tree->right == NULL)
		is_full = 0;
		is_full *= binary_tree_is_full(tree->left);
	}
	if (tree->right != NULL)
	{
		if (tree->left == NULL)
		is_full = 0;
		is_full *= binary_tree_is_full(tree->right);
	}
	return (is_full);
}
