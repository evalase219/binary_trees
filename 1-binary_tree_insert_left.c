#include "binary_trees.h"

/**
 *binary_tree_insert_left - insert a left child node
 *@parent: pointer to parent node
 *@value: item to store in node
 *Return: pointer to the new node, NULL in case of failure or parent is null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *tmp;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->left)
	{
		tmp = parent->left;
		parent->left = newnode;
		newnode->left = tmp;
		tmp->parent = newnode;
	}
	else
		parent->left = newnode;

	return (newnode);
}
