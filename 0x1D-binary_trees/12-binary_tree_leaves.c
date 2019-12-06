#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leaves found.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter1 = 0;
	size_t counter2 = 1;

	if (!tree)
		return (0);
	if (tree->left)
	{
		counter1 = binary_tree_leaves(tree->left);
		counter2 = binary_tree_leaves(tree->right);
	}
	return (counter1 + counter2);
}
