#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 * Return: Height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t gauche_height, droit_height;

    if (tree == NULL)
        return (0);

    gauche_height = binary_tree_height(tree->left);
    droit_height = binary_tree_height(tree->right);

    return (1 + (gauche_height > droit_height ? gauche_height : droit_height));
}

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t hauteur, vol;

    if (tree == NULL)
        return (0);

    hauteur = binary_tree_height(tree);
    vol = binary_tree_size(tree);

    return (vol == (1 << hauteur) - 1);
}

