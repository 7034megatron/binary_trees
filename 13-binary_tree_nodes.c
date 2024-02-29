#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of nodes
 *
 * Return: If tree is NULL, the function returns 0, else returns the node count
 *
 * Description: This function counts the nodes in a binary tree that have at
 * least one child (either left or right child). If the tree is empty (NULL),
 * the number of nodes is considered to be 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
