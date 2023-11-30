#include "binary_trees.h"

/**
 * binary_tree_root - Checks a node is a root of a binary tree
 * @node: Pointer to node to check.
 *
 * Return: If node is a root - 1.
 *         Otherwise - 0.
 */
int binary_tree_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
