#include "binary_trees.h"

/**
 * finds the height of the tree
 * @tree: the tree
 * Return: the height
 */
int tree_height(const binary_tree_t *tree)
{
	int l_height = 1, r_height = 1;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		l_height += tree_height(tree->left);
	}
	if (tree->right)
	{
		r_height += tree_height(tree->right);
	}
	if (r_height > l_height)
		return (r_height);
	return (l_height);
}

/**
 * finds the balance factor of a tree
 * @tree: the tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	l_height = tree_height(tree->left);
	r_height = tree_height(tree->right);
	return (l_height - r_height);
}
