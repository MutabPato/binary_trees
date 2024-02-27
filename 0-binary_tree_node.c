#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent:  pointer to the parent node to create
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	struct binary_tree_s *new_node = malloc(sizeof(struct binary_tree_s));
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return new_node;
}
