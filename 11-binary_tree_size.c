#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size
 * of a binary tree
 * @tree: pointer to the root node of the tree
 * to traverse.
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
	return (0);
	if (tree->left != NULL)
	{
		left++;
		left += binary_tree_size(tree->left);
	}
	if (tree->right != NULL)
	{
		right++;
		right += binary_tree_size(tree->right);
	}
	if (right == 0 && left == 0)
	return (1);
	return (left + right);
}
