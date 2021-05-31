#include "binary_trees.h"
/**
*binary_tree_insert_right - binary tree
* @parent: parent
* @value: value
* Return: return
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *right_node;

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
	node->right = NULL;
	node->left = NULL;
	right_node = parent->right;
	parent->right = node;
	node->parent = parent;

	if (right_node != NULL)
	{
		node->right = right_node;
		right_node->parent = node;
	}
	return (node);
}
