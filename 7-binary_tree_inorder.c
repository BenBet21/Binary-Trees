#include "binary_trees.h"
/**
 * binary_tree_inorder - Performs an in-order traversal on a binary tree
 * @tree: Pointer to the root node of the binary tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description:
 * This function performs an in-order traversal on the binary tree specified
 * by @tree. For each node traversed, the function pointed to by @func is
 * called, passing the value of the node as a parameter. The traversal follows
 * the in-order sequence: left child, current node, right child.
 * If @tree or @func is NULL, the function does nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
