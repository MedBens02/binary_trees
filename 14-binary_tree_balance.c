#include "binary_trees.h"

/**
 * binary_tree_balance - Balance factor of a binary tree.
 *
 * @tree: Root node of the tree.
 *
 * Return: Returns balance factor or NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree == NULL)
		return (0);

	balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (balance);
}

/**
 * binary_tree_height - Height of a binary tree.
 *
 * @tree: Root node of the tree.
 *
 * Return: Returns height or NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t left = 0, right = 0;

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
