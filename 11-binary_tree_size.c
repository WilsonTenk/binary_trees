#include "binary_trees.h"

/**
 * binary_tree_size - calc de size of a binary tree
 * @tree: tree to calc the size of
 *
 * Return: size of ree
 *         0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
