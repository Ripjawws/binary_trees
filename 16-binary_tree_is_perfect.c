#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
*power - binary tree
* @num1: tree
* @num2: num2
* Return: return
*/
int power(int num1, int num2)
{
	int result = num1, i;

	for (i = 0; i < num2; i++)
	{
		result *= num1;
	}
	return (result);
}
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
	if (tree->left || tree->right)
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		return (1 + (left_height > right_height ? left_height : right_height));
	}
	return (0);
}
/**
*binary_tree_size - binary tree
* @tree: tree
* Return: return
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = NULL, right_size = NULL, total_size = NULL;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
		left_size = binary_tree_size(tree->left);
	if (tree->right)
		right_size = binary_tree_size(tree->right);

	total_size = (left_size + right_size + 1);

	return (total_size);
}

/**
*binary_tree_is_perfect - binary tree
* @tree: tree
* Return: return
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0, count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	height = binary_tree_height(tree);
	count = binary_tree_size(tree);

	if (count == power(2, height) - 1)
		return (1);
	else
		return (0);

}
