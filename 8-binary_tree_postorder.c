#include "binary_trees.h"

/**
 * binary_tree_postorder - to Perform postorder traversal on tree.
 * @tree: tree i want to traverse.
 * @func: functn handle traversed node value.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if ((tree != NULL) && (func != NULL))
{
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
}
