#include "binary_trees.h"
/**
*binary_tree_insert_left - binary tree
* @parent: parent
* @value: value
* Return: return
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *left_node;

	if (!parent)
	{
		return (NULL);
	}

	node = malloc(sizeof(binary_tree_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	left_node = parent->left;
	parent->left = node;
	node->parent = parent;

	if (left_node != NULL)
	{
		node->left = left_node;
		left_node->parent = node;
	}
	return (node);
}
