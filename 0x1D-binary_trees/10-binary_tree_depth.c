#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a
 * binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: depth counter.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_counter = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth_counter = 1 + binary_tree_depth(tree->parent);
	return (depth_counter);
}
