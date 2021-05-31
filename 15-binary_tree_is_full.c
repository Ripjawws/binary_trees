#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
*binary_tree_is_full - binary tree
* @tree: tree
* Return: return
*/
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);


	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	else
		return (0);

}
