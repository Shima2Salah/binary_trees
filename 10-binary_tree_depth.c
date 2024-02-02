#include "binary_trees.h"

/**
 * binary_tree_depth - depth of a node in binary tree
 * @tree: pointer to tree node i want to measure
 * Return: Depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t Depth = 0;

if (!tree)
return (0);
while ((tree = tree->parent))
Depth++;
return (Depth);
}
