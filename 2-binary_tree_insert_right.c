#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: A pointer to the node to insert the right child in
 * @value: The value to store in the new node
 *
 * Return: If parent is NULL or an error occurs - NULL
 *         Otherwise - a pointer to the newly inserted node
 *
 * Description: If parent already has a right child, the new node takes its
 * place, and the old right child becomes the right child of the newly inserted
 * node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
