#include "binary_trees.h"

/**
 * binary_tree_preorder - to Perform preorder traversal on tree.
 * @tree: tree i want to traverse.
 * @func: functn handle traversed node value.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if ((tree != NULL) && (func != NULL))
{
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
}
