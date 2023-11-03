#include "binary_trees.h"

/**
 * binary_tree_postorder - A binary tree using postorder traversal.
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call for each node.
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		/*Termination condition*/
		if (tree == NULL)
			return;

		/*Traverse the left subtree*/
		binary_tree_postorder(tree->left, func);

		/*Traverse the right subtree*/
		binary_tree_postorder(tree->right, func);

		/*Call the function for the current node*/
                (*func)(tree->n);
	}
}
