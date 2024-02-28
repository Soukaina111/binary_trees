#include "binary_trees.h"
/**
 * height - Calculates the height of a binary tree
 * @tree: Pointer to the root node of the binary tree
 * Return: The height of the binary tree
 */
int haut(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;
    return 1 + max(haut(tree->left), haut(tree->right));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the binary tree
 * Return: The balance factor of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;
    return haut(tree->left) - haut(tree->right);
}
