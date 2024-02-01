#include "binary_trees.h"
/**
 * binary_tree_delete - to Deletes a binary tree \
 * @tree: tree i want to remove
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree != NULL)
{
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
}
