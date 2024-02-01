#include "binary_trees.h"

/**
 * binary_tree_inorder - to Perform inorder traversal on tree.
 * @tree: tree i want to traverse.
 * @func: functn handle traversed node value.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if ((tree != NULL) && (func != NULL))
{
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
}
