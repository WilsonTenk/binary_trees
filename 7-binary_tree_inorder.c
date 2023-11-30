#include "binary_trees.h"

/**
 * binarytree_inorder - Goes thru a binary tree
 * @tree: Pointer to the root node of tree to traverse.
 * @func: Pointer to function to call for each node
 */
void binarytree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binarytree_inorder(tree->left, func);
		func(tree->n);
		binarytree_inorder(tree->right, func);
	}
}
