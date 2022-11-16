#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a node
 * @tree: the tree
 * Return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
	{
		depth += binary_tree_depth(tree->parent);
		depth++;
	}
	return (depth);
}
