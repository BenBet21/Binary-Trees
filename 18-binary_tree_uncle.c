#include "binary_trees.h"
/**
 * binary_tree_uncle - Trouve l'oncle d'un nœud dans un arbre binaire
 * @node: Le nœud dont on cherche l'oncle
 *
 * Return: Pointeur vers le nœud de l'oncle, ou NULL s'il n'y en a pas
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand_parent;

	if (node == NULL)
	{
		return (NULL);
	}
	parent = node->parent;
	if (parent == NULL)
	{
		return (NULL);
	}
	grand_parent = parent->parent;
	if (grand_parent == NULL)
	{
		return (NULL);
	}
	if (grand_parent->left == NULL || grand_parent->right == NULL)
	{
		return (NULL);
	}
	else if (parent == grand_parent->left)
	{
		return (grand_parent->right);
	}
	return (grand_parent->left);
}
