#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: Root node of the tree.
 *
 * Return: The number of leaves.
 */
leaves_t binary_tree_leaves(const binary_tree_t *tree)
{
	leaves_t leavesL = 0, leavesR = 0;

	if (tree != NULL)
	{
		leavesL = binary_tree_leaves(tree->left);
		leavesR = binary_tree_leaves(tree->right);
	}
	return (leavesL + leavesR + 1);
}
