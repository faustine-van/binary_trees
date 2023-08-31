#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves fro given node
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int numberOfleft = 0;
	int numberOfright = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		numberOfleft = binary_tree_leaves(tree->left);
		numberOfright = binary_tree_leaves(tree->right);
		return (numberOfleft + numberOfright);

	}
}
