#include "binary_trees.h"
/**
 * binary_tree_sibling - This function Finds the sibling of a node in a binary tree.
 * @node: Pointer to the node to find the sibling.
 * Return: Pointer to the sibling node, or NULL if node is NULL or has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL);

    if (node->parent->left == node)
        return (node->parent->right);

    if (node->parent->right == node)
        return (node->parent->left);

    return (NULL);
}

/**
 * binary_tree_uncle -This function finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node, or NULL if node is NULL or has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL);

    binary_tree_t *parent = node->parent;

    return (binary_tree_sibling(parent));
}

