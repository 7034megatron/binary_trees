#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root of a binary tree.
 * @node: A pointer to the node to check
 *
 * Return: If the node is a root - 1
 *         Otherwise - 0
 *
 * Description: This function determines whether a given node is a root node
 * in a binary tree. A root node has no parent.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
