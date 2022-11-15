#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of the tree
 * @tree: the tree
 * Return: size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		l_height += binary_tree_height(tree->left);
		l_height++;
	}
	if (tree->right)
	{
		r_height += binary_tree_height(tree->right);
		r_height++;
	}
	if (r_height > l_height)
		return (r_height);
	return (l_height);
}
