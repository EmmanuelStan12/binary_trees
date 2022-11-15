#include "binary_trees.h"


/**
 * binary_tree_inorder - Goes through a tree using inorder
 * @tree: the tree
 * @func: the func
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (tree->left)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
