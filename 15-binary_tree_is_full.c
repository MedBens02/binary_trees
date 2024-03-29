#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if tree is full.
 *
 * @tree: Root node of the tree.
 *
 * Return: 1 if tree full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int result = 1;

	if (tree == NULL)
		return (0);

	if ((tree->left != NULL && tree->right == NULL) ||
		(tree->left == NULL && tree->right != NULL))
		return (0);

	if (tree->left != NULL)
		result *= binary_tree_is_full(tree->left);

	if (tree->right != NULL)
		result *= binary_tree_is_full(tree->right);

	return (result);
}
