#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Vérifie si un arbre binaire est parfait
 * @tree: Pointeur vers la racine de l'arbre à vérifier
 *
 * Return: 1 si l'arbre est parfait, 0 sinon ou si @tree est NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance;

	balance = binary_tree_balance(tree);
	if (balance != 0)
	{
		return (0);
	}
	return (1);
}
/**
 * binary_tree_balance - Calculate the balance factor of a binary tree.
 *
 * @tree: Pointer to the root of the binary tree.
 *
 * Description:
 * This function calculates the balance factor of the given binary tree.
 * Return:
 * The height of the tree.
 * If @tree is NULL, the function returns 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t niveau_gauche, niveau_droite;

	if (tree == NULL)
	{
		return (0);
	}
	niveau_gauche = binary_tree_height(tree->left);
	niveau_droite = binary_tree_height(tree->right);
	return (niveau_gauche - niveau_droite);
}
/**
 * binary_tree_height - Calculate the height of a binary tree.
 *
 * @tree: Pointer to the root of the binary tree.
 *
 * Description:
 * This function calculates the height of the given binary tree.
 * The height of a tree is defined as the number of levels in the tree,
 * where the level of a tree is the longest number of nodes from the
 * root to a leaf. The function recursively traverses the tree to determine
 * the height by finding the maximum height between the left subtree and
 * the right subtree at each node.
 *
 * Return:
 * The height of the tree.
 * If @tree is NULL, the function returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t niveau_gauche, niveau_droite;

	if (tree == NULL)
	{
		return (0);
	}
	niveau_gauche = binary_tree_height(tree->left);
	niveau_droite = binary_tree_height(tree->right);
	if (niveau_gauche > niveau_droite)
	{
		return (niveau_gauche + 1);
	}
	return (niveau_droite + 1);
}
