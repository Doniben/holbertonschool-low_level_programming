#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leaves found.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave_counter = 0;

	if (!tree)
		return (0);
	if (tree->left)
		leave_counter = binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right);
	return (leave_counter + 1);
}
