#include "binary_trees.h"
/**
 * binary_tree_size - Calculate the size of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The size of the binary tree, or 0 if tree is NULL
 *
 * Description:
 * This function calculates the size of a binary tree,
 * which is the total number of nodes in the tree.
 * If the tree is empty (tree is NULL), the function returns 0.
 * Otherwise, it recursively counts the number of nodes in the left
 * subtree and the number of nodes in the right subtree, and adds
 * 1 to account for the root node.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
