#include "binary_trees.h"

/**
 * binary_tree_height_alt -this function Measures
 * height of a binary tree for a balanced tree
 * @tree: The tree to traverse
 * Return: The height
 */
size_t binary_tree_height_alt(const binary_tree_t *tree)
{
    size_t height_left = 0;
    size_t height_right = 0;

    if (tree == NULL)
        return (0);

    height_left = tree->left ? 1 + binary_tree_height_alt(tree->left) : 1;
    height_right = tree->right ? 1 + binary_tree_height_alt(tree->right) : 1;

    return (height_left > height_right ? height_left : height_right);
}

/**
 * binary_tree_balance_alt -this function Measures
 * balance factor of a binary tree
 * @tree: The tree to traverse
 * Return: Balanced factor
 */
int binary_tree_balance_alt(const binary_tree_t *tree)
{
    int height_left = 0, height_right = 0, balance_factor = 0;

    if (tree)
    {
        height_left = (int)binary_tree_height_alt(tree->left);
        height_right = (int)binary_tree_height_alt(tree->right);
        balance_factor = height_left - height_right;
    }

    return (balance_factor);
}

