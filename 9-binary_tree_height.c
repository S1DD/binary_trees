#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the tree
 * 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_Height = 0;
	size_t r_Height = 0;

	if (!tree)
		return (0);

	l_Height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_Height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (l_Height > r_Height ? l_Height : r_Height);
}
