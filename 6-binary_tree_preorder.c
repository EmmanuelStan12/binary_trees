#include "binary_trees.h"


/**
 * binary_tree_preorder - Goes through a tree using preorder
 * @tree: the tree
 * @func: the func
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
