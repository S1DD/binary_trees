#include "binary_trees.h"

/**
 * binary_tree_size - Measures the the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: if tree is NULL, 0
 */
size_t binary_tree_size(const binary_t *tree)
{
	size_t left = binary_tree_size(tree->left);
	size_t right = binary_tree_size(tree->right);

	if (!tree)
		return (0);

	return (left + right + 1);
}
