#include "binary_trees.h"
/**
 *binary_tree_leaves - Func counts leaves in tree
*@tree: pointer to tree
*Return: The addition of both sides of tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t left, right;

left = 0;
right = 0;
if (tree == NULL)
	return (0);
if (tree->left == NULL && tree->right == NULL)
	return (1);
left = binary_tree_leaves(tree->left);
right = binary_tree_leaves(tree->right);
return (left + right);
}
