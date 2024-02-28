#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t gauche = 0;
	size_t droit = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left != NULL)
			gauche = 1 + binary_tree_height(tree->left);
		if (tree->right != NULL)
			droit = 1 + binary_tree_height(tree->right);
		if (gauche > droit)
			return (gauche);
		else
			return (droit);
	}
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Balance factor of the binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int gauche = 0;
	int droit = 0;
	int BF = 0;

	if (tree != NULL)
	{
		gauche = ((int)binary_tree_height(tree->gauche));
		droit = ((int)binary_tree_height(tree->droit));
		BF = gauche - droit;
	}
	return (BF);
}





