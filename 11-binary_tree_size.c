#include "binary_trees.h"

/**
 * binary_tree_size - Size of a binary tree.
 *
 * @tree: Root node of the tree to measure the size of.
 *
 * Return: Size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeL = 0, sizeR = 0;

	if (tree != NULL)
	{
		sizeL = binary_tree_size(tree->left);
		sizeR = binary_tree_size(tree->right);
	}
	return (sizeL + sizeR + 1);
}
