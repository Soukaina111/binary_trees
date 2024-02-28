#include "binary_trees.h"
/**
 * binary_tree_nodes -this function counts the nodes
 * with at least one child in a binary tree
 * @tree: pointer to the root node of the tree to count the nodes
 * Return: number of nodes with at least one child, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t gauche_nodes;
size_t droit_nodes;

if (tree == NULL)
return (0);

if (tree->left != NULL || tree->right != NULL)
{
gauche_nodes = binary_tree_nodes(tree->left);
droit_nodes = binary_tree_nodes(tree->right);
return (gauche_nodes + droit_nodes + 1);
}
return (0);
}

