#include"binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a new left child node in a binary tree
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *arbre;

	if (parent == NULL)
	{
		return (NULL);
	}
	arbre = malloc(sizeof(binary_tree_t));
	if (arbre == NULL)
	{
		return (NULL);
	}

	arbre->n = value;
	arbre->left = NULL;
	arbre->right = NULL;
	arbre->parent = parent;

	if (parent->right != NULL)
	{
		arbre->right = parent->right;
		arbre->right->parent = arbre;
	}
	parent->right = arbre;
	arbre->parent = parent;
	return (arbre);
}
