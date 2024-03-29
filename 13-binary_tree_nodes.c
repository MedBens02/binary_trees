#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in a binary tree.
 *
 * @tree: Root node of the tree.
 *
 * Return: The number of nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodesL = 0, nodesR = 0, nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		nodes++;

	nodesL = binary_tree_nodes(tree->left);
	nodesR = binary_tree_nodes(tree->right);

	nodes = nodesR + nodesL;

	return (nodes);
}
