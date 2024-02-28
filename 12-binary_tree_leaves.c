#include "binary_trees.h"

/**
 * binary_tree_leaves -Starts a function that
 * counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves
 * Return: number of leaves in the binary tree, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t gauche_leaves;
size_t droit_leaves;

if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
else
{
gauche_leaves = binary_tree_leaves(tree->left);
droit_leaves = binary_tree_leaves(tree->right);
return (gauche_leaves + droit_leaves);
}
}

