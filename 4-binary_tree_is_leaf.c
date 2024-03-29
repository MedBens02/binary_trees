#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf of a binary tree.
 *
 * @node: The node to check.
 *
 * Return: 1 if node is a leaf.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
		return (0);

	return (1);
}
