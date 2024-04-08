#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a given node is a root node
 * @node: Pointer to the node to check
 *
 * Description:
 * This function checks if the given node is a root node in the binary tree.
 * A root node is a node that has no parent.
 *
 * Return: 1 if the node is a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
