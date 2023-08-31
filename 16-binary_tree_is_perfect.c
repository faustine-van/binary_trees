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
	/*Calculate the number of nodes in a full binary tree with height 3: */
	/* 1 << 3 equals 8. */
	/* Subtract 1: 8 - 1 equals 7. */
	/* So, a perfect binary tree with a height of 3 */
	/*can have a maximum of 7 nodes.*/

	return (numberofnodes == max_nodes);
}
