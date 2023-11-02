#include "binary_trees.h"

/**
 *binary_tree_preorder - traverse a binary tree using the preorder traversal
 *@tree: a pointer to the root node of the binary tree
 *@func: function pointer to a given pointer
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL || func != NULL)
	{
		if (tree == NULL)
			return;

		(*func)(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
