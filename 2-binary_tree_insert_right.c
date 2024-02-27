#include "binary_trees.h"

/**
 * binary_tree_insert_right -Starts a function that inserts a node as
 * the right-child of another node if it's availabe
 * Return: Pointer to the newly created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *nnode;

    if (parent == NULL)
        return (NULL);

    nnode = malloc(sizeof(binary_tree_t));

    if (nnode == NULL)
        return (NULL);

    nnode->n = value;
    nnode->parent = parent;
    nnode->left = NULL;
    nnode->right = parent->right;
    parent->right = nnode;
    if (nnode->right != NULL)
        nnode->right->parent = nnode;
    return (nnode);
}

