#include "binary_trees.h"
/**
* binary_tree_is_root - CHECK a root node
* @node: Pointer to the node i want to check
* Return: 1 if a root, otherwise 0.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
return (0);
return (1);
}
