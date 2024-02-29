#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth
 *
 * Return: If tree is NULL, the function returns 0, else returns the depth
 *
 * Description: This function measures the depth of a node in a binary tree,
 * which is defined as the number of edges between the node and the root
 * node. If the tree is empty (NULL) or the node is not part of a tree
 * (i.e., it has no parent), the depth is considered to be 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
