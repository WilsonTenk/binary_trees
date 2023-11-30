#include "binary_trees.h"

/**
 * binary_tree_postorder - goes thru a binarytree by post-order traverse
 * @tree: tree 
 * @func: pointer to a function foreach node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
