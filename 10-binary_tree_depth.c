#include "binary_trees.h"
/**
 * binary_tree_depth -Starts a function that computes the
 * depth of specified node from root
 * @tree: node to check the depth
 * Return: 0 is it is the root or number of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

while (tree != NULL && tree->parent != NULL)
{
depth++;
tree = tree->parent;
}
return (depth);
}

