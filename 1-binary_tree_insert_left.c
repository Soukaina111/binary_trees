#include "binary_trees.h"

/**
 * binary_tree_insert_left - add a node in the left of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *nnode;

    if (parent == NULL)
    {
        return (NULL);
    }

    nnode = binary_tree_node(parent, value);
    if (nnode == NULL)
    {
        return (NULL);
    }
    if (!parent->left)
    {
        nnode->left = parent->left;
        parent->left->parent = nnode;
    }
    parent->left = nnode;
    return (nnode);
}

