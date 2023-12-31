#include "binary_trees.h"

/**
 * binary_tree_inorder - A binary tree using in-order traversal.
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call for each node.
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		/*Termination condition*/
		if (tree == NULL)
			return;

		/*Traverse the left subtree*/
		binary_tree_inorder(tree->left, func);

		/*Call the function for the current node*/
		(*func)(tree->n);

		/*Traverse the right subtree*/
		binary_tree_inorder(tree->right, func);
	}
}
