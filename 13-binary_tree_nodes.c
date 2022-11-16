#include "binary_trees.h"

/**
 * binary_tree_nodes - finds the count of nodes on a tree
 * @tree: the tree
 * Return: the count of the nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		size += binary_tree_nodes(tree->left);
	if (tree->right)
		size += binary_tree_nodes(tree->right);
	if (tree->right || tree->left)
		size++;
	return (size);
}
