#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t numberOfleft = 0;
	size_t numberOfright = 0;

	if (tree == NULL)
		return (0);

	numberOfleft = binary_tree_nodes(tree->left);
	numberOfright = binary_tree_nodes(tree->right);

	return (numberOfleft + numberOfright + (
				tree->left != NULL || tree->right != NULL));
}
