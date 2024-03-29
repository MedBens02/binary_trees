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
	size_t heightL, heightR;

	if (tree == NULL)
		return (0);

	heightL = binary_tree_height(tree->left);
	heightR = binary_tree_height(tree->right);

	return (1 + (heightL > heightR ? heightL : heightR));
}

/**
 * binary_tree_balance - Balance factor of a binary tree.
 *
 * @tree: Root node of the tree.
 *
 * Return: Returns balance factor or NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t heightL, heightR;

	if (tree == NULL)
		return (0);

	heightL = binary_tree_height(tree->left);
	heightR = binary_tree_height(tree->right);

	return (heightL - heightR);
}


/**
 * binary_tree_is_perfect -  creates a binary tree node.
 *
 * @tree: pointer to the parent node of the node to create.
 * Dscription:A perfect binary tree is a tree in which all interior
 * nodes have two children and all leaves are at the same level.
 * Return: pointer to the new node, or NULL on failure
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree) == 0)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}
