#ifndef BINARY_TREE
#define BINARY_TREE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FULL 1
#define NOT_FULL 0

typedef struct binary_tree_s {
	int n;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
	struct binary_tree_s *parent;
} binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
int binary_tree_is_full(const binary_tree_t *tree);
void binary_tree_print(const binary_tree_t *tree);

#endif /* BINARY_TREE */
