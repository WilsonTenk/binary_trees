#include "binary_trees.h"

/**
 * binary_tree_leaf - look for node is a leaf of a binary tree.
 * @node: pointer to the node to check
 *
 * Return: If node is a leaf - 1.
 *         Otherwise - 0.
 */
int binary_tree_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
