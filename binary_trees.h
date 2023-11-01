#ifndef BINARY_TREE_H
#define BINARY_TREE_H

/*std libs*/
#include <stdlib.h>
#include <unistd.h>

/*struct definitions*/
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/*Function decleartions*/

/*print function*/
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s);
void binary_tree_print(const binary_tree_t *tree);

/*binary_tree functions*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif /*BINARY_TREE_H*/
