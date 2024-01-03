#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stddef.h>
#include <limits.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* The binary search tree */
typedef struct binary_tree_s bst_t;

/* avl tree */
typedef struct binary_tree_s avl_t;

/* maximum binary heap */
typedef struct binary_tree_s_heep_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif
