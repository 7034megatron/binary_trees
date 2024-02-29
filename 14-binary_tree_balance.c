#include "binary_trees.h"

/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0, else return balance factor
 *
 * Description: This function measures the balance factor of a binary tree,
 * which is defined as the difference between the height of the left subtree
 * and the height of the right subtree. If the tree is empty (NULL), the
 * balance factor is considered to be 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, the function returns 0, else returns the height
 *
 * Description: This function measures the height of a binary tree, which is
 * defined as the length of the longest path from the root node to a leaf
 * node. If the tree is empty (NULL), the height is considered to be 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
