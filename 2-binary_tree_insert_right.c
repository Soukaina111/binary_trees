#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a new node as the right
 * child of a parent node.
 * If the parent already has a right child,
 * the existing right child is moved down one level,
 * and the new node is added as the right child of the parent.
 * @parent: A pointer to the parent node.
 * @value: The value to be stored in the new node.
 * Return: If the function fails or the parent is NULL, returns NULL.
 *         Otherwise, returns a pointer to the newly created node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *nnode;

nnode = malloc(sizeof(binary_tree_t))
if (parent == NULL)
return (NULL);

if (nnode == NULL)
return (NULL);

nnode->n = value;
nnode->parent = parent;
nnode->left = NULL;

if (parent->right != NULL)
{
nnode->right = parent->right;
parent->right->parent = nnode;
}
else
{
nnode->right = NULL;
}
parent->right = nnode;
return (nnode);
}

