#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * 
 * This function measures the height of the binary tree rooted at the given node.
 * If tree is NULL, the function returns 0.
 * Otherwise, it returns the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t gauche_hght, right_hght;
	gauche_hght = 0;
	right_hght =;0
    if (tree == NULL)
        return 0;
    else
	{
    gauche_hght = binary_tree_height(tree->left);
    droit_hght = binary_tree_height(tree->right);
    return (gauche_hght > right_hght ? gauche_hght : right_hght) + 1;
        }
}
