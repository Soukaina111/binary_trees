#include "binary_trees.h"
/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Height of the binary tree.
 */
int binary_tree_height(const binary_tree_t *tree)
{
int gauche_height;
int droit_height;
int max_height;

if (tree == NULL)
{
return (0);
}
else
{
gauche_height = binary_tree_height(tree->left);
droit_height = binary_tree_height(tree->right);
max_height = gauche_height > droit_height ? gauche_height : droit_height;
return (1 + max_height);
}
}
/**
 * binary_tree_balance -The function that  measures
 * the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Balance factor of the binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int gauche_height;
int droit_height;

if (tree == NULL)
{
return (0);
}
else
{
gauche_height = binary_tree_height(tree->left);
droit_height = binary_tree_height(tree->right);
return (gauche_height - droit_height);
}
}
