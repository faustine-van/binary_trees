#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check is node is a leaf
 * if node is NULL return 0
 * @node: pointer to the node to check
 * Return: Always 0 (Success) if node is a leaf otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
