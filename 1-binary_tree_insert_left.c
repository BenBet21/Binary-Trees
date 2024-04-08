#include "binary_trees.h"

/**
 * binary_tree_insert_left - This function inserts a node
 * as a left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: integer value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *arbre;

	if (parent == NULL)
		return (NULL);

	arbre = malloc(sizeof(binary_tree_t));
	if (arbre == NULL)
		return (NULL);

	arbre->n = value;
	arbre->parent = parent;
	arbre->left = NULL;
	arbre->right = NULL;

	if (parent->left != NULL)
	{	arbre->left = parent->left;
		arbre->left->parent = arbre;
	}
	parent->left = arbre;
	arbre->parent = parent;

	return (arbre);
}
