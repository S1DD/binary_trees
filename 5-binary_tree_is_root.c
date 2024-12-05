#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks for a root node
 * @node: The node to check if its a root node
 *
 * Return: 0 if its not a root node or node is NULL
 * or 1 if it is a root node
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 1 : 0);
}
