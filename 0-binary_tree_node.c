#include "binary_trees.h"

/**
 *binary_tree_node - create a new node for the binary tree
 *@parent: pointer to parent node
 *@value: item to store in node
 *Return: a pointer to the newly created node or null if it fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	return (newnode);
}
