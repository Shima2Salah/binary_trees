#include "binary_trees.h"
/**
* binary_tree_is_leaf - CHECK a Leaf node
* @node: Pointer to the node i want to check
* Return: 1 if a leaf, otherwise 0.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL || node->left != NULL || node->right != NULL)
return (0);
return (1);
}
