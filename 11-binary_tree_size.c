#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the measure of height of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int leftSize = binary_tree_size(tree->left);
	int rightSize = binary_tree_size(tree->right);

	return (leftSize + rightSize + 1);
}