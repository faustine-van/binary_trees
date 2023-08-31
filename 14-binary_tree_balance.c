#include "binary_trees.h"

/**
 * recur_tree_height - height of a tree in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: height
 */
size_t recur_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = recur_tree_height(tree->left);
	right_height = recur_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);

}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the node to measure the depth
 * Return: MEASURE OF DEPTH
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = recur_tree_height(tree->left);
	right_height = recur_tree_height(tree->right);

	return (left_height - right_height);

}
