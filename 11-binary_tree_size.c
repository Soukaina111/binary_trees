#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the binary tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t size = 0;
    const binary_tree_t *cur_node;
    const binary_tree_t *der_node = NULL;

    if (tree == NULL)
        return 0;

    cur_node = tree;

    while (cur_node != NULL)
    {
        if (cur_node->left == NULL)
        {
            size++;
            cur_node = cur_node->right;
        }
        else
        {
            der_node = cur_node->left;
            while (der_node->right != NULL && der_node->right != cur_node)
                der_node = der_node->right;

            if (der_node->right == NULL)
            {
                der_node->right = cur_node;
                cur_node = cur_node->left;
            }
            else
            {
                der_node->right = NULL;
                size++;
                cur_node = cur_node->right;
            }
        }
    }

    return (size);
}

