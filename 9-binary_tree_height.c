#include "binary_trees.h"

/**
 * binary_tree_height - height of binary tree from a node given
 * @tree: pointer to tree node i want to measure
 * Return: height or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (0);

left = binary_tree_height(tree->left) + 1;
right = binary_tree_height(tree->right) + 1;

if (left > right)
return (left);
else
return (right);
}
