#include "binary_trees.h"
/**
 * binary_tree_insert_left -this function inserts a node in the left of the parent
 * @parent: parent of the specified node
 * @value: value of the node
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
