#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - to make new bin node in left
 * @parent: pointer of parent node
 * @value : integer value
 * Return: new node pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_bin_node;

if (parent == NULL)
{
return (NULL);
}

new_bin_node = binary_tree_node(parent, value);
if (new_bin_node == NULL)
return (NULL);
if (parent->left != NULL)
{
new_bin_node->left = parent->left;
parent->left->parent = new_bin_node;
}
parent->left = new_bin_node;
return (new_bin_node);
}
