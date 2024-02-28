#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the binary tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t gauche_size;
    size_t droit_size;

    if (tree == NULL) {
        return (0);
    }

    gauche_size = binary_tree_size(tree->left);
    droit_size = binary_tree_size(tree->right);

    return (gauche_size + droit_size + 1);
}

