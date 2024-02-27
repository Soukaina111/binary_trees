#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * according to the state of the parent if it is available or not
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *nnode;

    if (parent==NULL)
        return (NULL);

    nnode = malloc(sizeof(binary_tree_t));
    if (nnode==NULL)
        return (NULL);

    nnode->n = value;
    nnode->parent = parent;
    nnode->right = NULL;
    nnode->left = parent->left;
    parent->left = nnode;
    if (nnode->left!=NULL)
        nnode->left->parent = nnode;
    return (nnode);
}
