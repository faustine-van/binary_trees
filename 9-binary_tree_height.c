#include "binary_trees.h"


/**
 * recur_tree_height - height of a tree in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: height
 */
size_t recur_tree_height(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	size_t left_height = recur_tree_height(tree->left);
	size_t right_height = recur_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);

}
/**
 * binary_tree_height - measures the height of a tree in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: height of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (recur_tree_height(tree) - 1);
}
