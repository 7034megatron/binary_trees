#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size of
 *
 * Return: The size of the tree
 *
 * Description: This function measures the size of a binary tree, which is
 * defined as the total number of nodes in the tree. If the tree is empty
 * (NULL), the size is considered to be 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
