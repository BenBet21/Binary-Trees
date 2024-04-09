#include "binary_trees.h"
/**
 * binary_tree_depth - Calculate the depth of a node in a binary tree.
 *
 * @tree: Pointer to the node to measure the depth.
 *
 * Description:
 * This function measures the depth of a given node in a binary tree.
 * It traverses up the tree from the given node
 * until it reaches the root, counting each level as it goes.
 * The depth of the root node is 0.
 * Return: The depth of the node, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t profondeur = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent == NULL)
		return (0);

	profondeur = binary_tree_depth(tree->parent) + 1;

	return (profondeur);
}
