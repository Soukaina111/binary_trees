#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle.
 * Return: Pointer to the uncle node, or NULL if node is NULL, parent is NULL,
 * or grandparent is NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (NULL);
}
if( node->parent->parent == NULL)
{
return (NULL);
}
else
{
return (node->parent == node->parent->parent->left ?
node->parent->parent->right : node->parent->parent->left);
}

