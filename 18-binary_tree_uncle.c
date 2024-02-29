#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a node in a binary tree
 * @node: A pointer to the node to find the uncle of
 *
 * Return: If node is NULL or has no uncle, NULL
 *         Otherwise, a pointer to the uncle node
 *
 * Description: This function finds the uncle of a given node in a binary tree.
 * If the given node is NULL, or has no parent or grandparent (i.e., it's the
 * root node or a child of the root), or if there is no uncle (i.e., the parent
 * of the node has no sibling or has only one child), it returns NULL.,
 * it returns a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
