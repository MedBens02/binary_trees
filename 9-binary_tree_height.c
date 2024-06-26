#include "binary_trees.h"

/**
 * binary_tree_height - Height of a binary tree.
 *
 * @tree: Root node of the tree.
 *
 * Return: Returns height or NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree != NULL)
	{
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);

		if (left > right)
			return (left);
		else
			return (right);
	}
	return (0);
}
