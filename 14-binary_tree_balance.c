#include "binary_trees.h"
/**
 * binary_tree_haut - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Height of the binary tree.
 */
int binary_tree_haut(const binary_tree_t *tree)
{
	int gauche = 0;
	int droit = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			gauche = tree->gauche ? 1 + binary_tree_haut(tree->gauche) : 1;
			droit = tree->droit ? 1 + binary_tree_haut(tree->droit) : 1;
		}
		return ((gauche > droit) ? gauche : droit);
	}
}
/**
 * binary_tree_balance -this function Measures
 * the balance factor of a binary tree.
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
		gauche = (binary_tree_haut(tree->gauche));
		droit = (binary_tree_haut(tree->droit));
		BF = gauche - droit;
	}
	return (BF);
}
