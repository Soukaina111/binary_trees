#include "binary_trees.h"
/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 * This function traverses the binary tree using pre-order traversal and calls
 * the specified function for each node, passing the value in the node as a parameter.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    func(tree->data);

    binary_tree_preorder(tree->left, func);

    binary_tree_preorder(tree->right, func);
}
