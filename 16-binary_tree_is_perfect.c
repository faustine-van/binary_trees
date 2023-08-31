#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a tree in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: MEASURE OF DEPTH
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

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

	return (leftSize + 1 + rightSize);


}
/**
 * binary_tree_is_perfect - checks if a binary tree is prefect
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: 1(success) or 0(failure)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int height = binary_tree_height(tree);
	int numberofnodes = binary_tree_size(tree);
	/*Calc max number of nodes in a perfect binary tree of given height */
	int max_nodes = (1 << height) - 1;

	return (numberofnodes == max_nodes);
}
