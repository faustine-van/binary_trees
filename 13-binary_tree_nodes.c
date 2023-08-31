#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	int numberOfleft = binary_tree_nodes(tree->left);
	int numberOfright = binary_tree_nodes(tree->right);

	return (numberOfleft + numberOfright + (
				tree->left != NULL || tree->right != NULL));
}