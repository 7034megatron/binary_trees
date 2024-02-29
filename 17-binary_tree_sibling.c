#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node in a binary tree
 * @node: A pointer to the node to find the sibling of
 *
 * Return: If node is NULL or there is no sibling - NULL
 *         Otherwise - a pointer to the sibling
 *
 * Description: This function finds the sibling of a given node.
 * If the given node is NULL or has no parent (i.e., it's the root node), or if
 * there is no sibling (i.e., the parent has only one child), it returns NULL.
 * Otherwise, it returns a pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
