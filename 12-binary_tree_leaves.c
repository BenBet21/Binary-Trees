#include "binary_trees.h"
/**
 * binary_tree_leaves - Calculate the number of leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Description:
 * This function counts the number of leaves of the given binary tree.
 * Return: the number of leaves of the tree.
 * If @tree is NULL, the function returns 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t feuille = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		feuille++;
	else
	{
		feuille += binary_tree_leaves(tree->left);
		feuille += binary_tree_leaves(tree->right);
	}

	return (feuille);
}
