#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
*binary_tree_sibling - binary tree
* @node: tree
* Return: return
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);
	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
	{
		return (node->parent->left);
	}
	else
	{
		return (NULL);
	}
}
/**
*binary_tree_uncle - binary tree
* @node: tree
* Return: return
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (binary_tree_sibling(node->parent));
	if (binary_tree_sibling(node->parent) == NULL)
		return (NULL);

}
