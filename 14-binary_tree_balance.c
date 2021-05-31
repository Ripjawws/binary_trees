#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
*binary_tree_height - binary tree
* @tree: tree
* Return: return
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_height > right_height ? left_height : right_height);
}


/**
*binary_tree_balance - binary tree
* @tree: tree
* Return: return
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, total_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	total_height = left_height - right_height;
	total_height += (tree->left ? 0 : -1);
	total_height -= (tree->right ? 0 : -1);
	return (total_height);
}
