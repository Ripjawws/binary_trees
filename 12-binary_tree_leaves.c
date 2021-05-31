#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
*binary_tree_leaves - binary tree
* @tree: tree
* Return: return
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right_count, left_count, total_count;

	if (tree == NULL)
		return (0);

	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		left_count = binary_tree_leaves(tree->left);
		right_count = binary_tree_leaves(tree->right);
		total_count = left_count + right_count;
		return (total_count);
	}
}
