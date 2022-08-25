#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_is_perfect - function that checks
 * if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * to check
 * Return: 1 if perfect or 0 if NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_perfect = 0;
	size_t nodes = 0, height = 0;

	if (tree == NULL)
	return (0);
	height = binary_tree_height(tree);
	nodes = binary_tree_nodes(tree);
	if (nodes == (pow(2, height) - 1))
		is_perfect = 1;
	return (is_perfect);
}

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
		nodes += binary_tree_nodes(tree->left);
	}
	if (tree->right != NULL)
	{
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
