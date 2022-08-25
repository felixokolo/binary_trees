#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 * @tree: pointer to the root node of the
 * tree to measure the balance factor
 * Return: balance factor of tree or 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
	return (0);
	if (tree->left != NULL)
	{
		left = binary_tree_balance(tree->left);
	}
	if (tree->right != NULL)
	{
		right = binary_tree_balance(tree->right);
	}
	if (tree->left == NULL)
	left = -1;
	if (tree->right == NULL)
	right = -1;
	return (left - right);
}
