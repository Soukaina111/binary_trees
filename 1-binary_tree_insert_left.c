#include "binary_trees.h"
/**
 * binary_tree_insert_left -starts a function that inserts a node
 * as the left-child of another node regarding the state of
 * the parent if it is available or not
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the creatd nocd
 *
 * Return: Pointer to the newnode.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
    {
        return (NULL);  /* Return NULL if parent is NULL */
    }

    binary_tree_t *nnode = malloc(sizeof(binary_tree_t));
    if (nnode == NULL)
    {
        return (NULL);
    }

    nnode->value = value;
    nnode->left = NULL;
    nnode->right = NULL;

    if (parent->left != NULL)
    {
        
        nnode->left = parent->left;
    }

    parent->left = nnode;
    return (nnode);
}

