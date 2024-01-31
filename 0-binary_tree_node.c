#include "binary_trees.h"
/**
 * binary_tree_node - to make new bin node
 * @parent: pointer of parent node
 * @value : integer value
 * Return: new node pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

binary_tree_t *new_bin_node;

new_bin_node = malloc(sizeof(binary_tree_t));
if (new_bin_node == NULL)
return (NULL);

new_bin_node->n = value;
new_bin_node->parent = parent;
new_bin_node->right = NULL;
new_bin_node->left = NULL;
return (new_bin_node);
}
