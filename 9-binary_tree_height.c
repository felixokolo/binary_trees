#include "binary_trees.h"

/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree: pointer to the root node of the tree to
 * measure the height.
 * Return: height of tree or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, right = 0, left = 0;

	if (tree == NULL)
	return (height);
	if (tree->left != NULL)
	{
		left++;
		left += binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right++;
		right += binary_tree_height(tree->right);
	}
	if (left == 0 && right == 0)
	return (0);
	else
	return (left >= right ? left : right);
	return (0);
}
