#include "binary_trees.h"

/**
 * binary_tree_balance - to measure balance of binary tree
 * @tree: pointer to root node i want to measure
 * Return: balance factor height of (left - right) or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left, right;

if (tree == NULL)
return (0);

left = binary_left_or_right_height(tree->left);
right = binary_left_or_right_height(tree->right);

return (left - right);
}

/**
 * binary_left_or_right_height - calculate height
 * @tree: pointer to tree node
 * Return: height or -1 if NULL
 */
int binary_left_or_right_height(const binary_tree_t *tree)
{
int left, right;

if (tree == NULL)
return (-1);

if (tree->left == NULL && tree->right == NULL)
return (0);

left = binary_left_or_right_height(tree->left) + 1;
right = binary_left_or_right_height(tree->right) + 1;

if (left > right)
return (left);
else
return (right);
}
