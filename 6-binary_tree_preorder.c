#include "binary_trees.h"

/**
 * binarytree_preorder - Goes thru a binary tree by pre-order
 * @tree: Pointer to root node of tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binarytree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binarytree_preorder(tree->left, func);
		binarytree_preorder(tree->right, func);
	}
}
