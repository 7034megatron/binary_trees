#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree recursively.
 * @tree: A pointer to the root node of the tree to delete
 *
 * Description: This function recursively deletes a binary tree starting from
 * the given root node. It frees each node in the tree.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
