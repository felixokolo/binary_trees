#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes
 * through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree
 * to traverse.
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a
 * parameter to this function.
 * Return : void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;
	func(tree->n);
	if (tree->left != NULL)
	binary_tree_preorder(tree->left, func);
	if (tree->right != NULL)
	binary_tree_preorder(tree->right, func);
}
