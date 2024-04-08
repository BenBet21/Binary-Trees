#include"binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the binary tree to delete
 *
 * Description:
 * This function deletes the entire binary tree starting from the root node
 * specified by @tree. It recursively deletes each node in the tree,
 * deallocating the memory associated with it.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
