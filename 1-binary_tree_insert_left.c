#include "binary_trees.h"
/**
*binary_tree_insert_left - This function Inserts a new
*node as the left child of a parent node.
*If the parent already has a left child,
*And the new node is added as the left child of the parent.
*@parent: A pointer to the parent node.
*@value: The value to be stored in the new node.
*Return: If the function fails or the parent is NULL, returns NULL.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	nnode = binary_tree_node(parent, value);

	if (parent == NULL)
	{
		return (NULL);
	}
	if (nnode == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		nnode->left = parent->left;
		parent->left->parent = nnode;
	}

	parent->left = nnode;
	return (nnode);
	
}
