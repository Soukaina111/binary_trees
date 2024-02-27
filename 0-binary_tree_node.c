#include "binary_trees.h"
/**
 * binary_tree_node - Starts a function that creates a binary tree node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the created node
 *
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	nnode = malloc(sizeof(binary_tree_t));

if (nnode)
{
nnode->parent = parent;
nnode->n = value;
nnode->left = NULL;
nnode->right = NULL;
return (nnode);
}
else
{
return (NULL);
}
}



