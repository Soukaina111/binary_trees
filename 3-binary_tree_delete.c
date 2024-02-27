#include "binary_trees.h"
/**
 * binary_tree_delete -this starts a function that deletes an entire
 * binary tree
 * @tree: Pointer to the root node of the tree to delete
 * This function recursively deletes all nodes in the binary tree
 * starting from the given root node.
 * If the root node is NULL, indicating an empty tree, the function does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    free(tree);
}

