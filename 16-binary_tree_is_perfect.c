#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks
 * if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * to check
 * Return: 1 if perfect or 0 if NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_perfect = 1;

	if (tree == NULL)
	return (0);
	if (tree->left != NULL)
	{
		if (tree->right == NULL)
		is_perfect = 0;
		is_perfect *= binary_tree_is_perfect(tree->left);
	}
	if (tree->right != NULL)
	{
		if (tree->left == NULL)
		is_perfect = 0;
		is_perfect *= binary_tree_is_perfect(tree->right);
	}
	return (is_perfect);
}
