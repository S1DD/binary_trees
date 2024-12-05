#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using 
 * post-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_postorder(binary_tree_t *tree, (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}