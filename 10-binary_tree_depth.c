#include "binary_trees.h"

/**
 * binary_tree_depth - Depth of a node in a binary tree.
 *
 * @tree: Node to measure the depth.
 *
 * Return: Returns the depth or NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t res = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		res = 1 + binary_tree_depth(tree->parent);

	return (res);
}
