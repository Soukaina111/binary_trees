#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of the node, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t gauche_prof;
	size_t droit_prof;

if (tree == NULL)
{
	return (0);
}
else
{
gauche_prof = binary_tree_depth(tree->left);
droit_prof = binary_tree_depth(tree->right);
return (gauche_prof > droit_prof ? gauche_prof + 1 : droit_prof + 1);
}
}
