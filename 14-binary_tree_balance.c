#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);

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
