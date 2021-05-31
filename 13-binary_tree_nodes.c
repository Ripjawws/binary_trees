#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
*binary_tree_nodes - binary tree
* @tree: tree
* Return: return
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right == NULL)
	{
		return (1 + binary_tree_nodes(tree->left));
	}
	if (tree->left == NULL && tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->right));
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
	}

	return (0);
}
