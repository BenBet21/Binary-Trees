#include "binary_trees.h"
/**
 * binary_tree_nodes - Count the number of nodes in a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The number of nodes in the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t niveau_gauche, niveau_droite;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (0);
	}
	niveau_gauche = binary_tree_nodes(tree->left);
	niveau_droite = binary_tree_nodes(tree->right);
	return (niveau_gauche + niveau_droite + 1);
}
