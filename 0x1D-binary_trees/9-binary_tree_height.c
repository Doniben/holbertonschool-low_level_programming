#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: measure of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);
	if (tree->right)
		counter++;
	if (tree->left)
		counter++;
	return (counter);
}
