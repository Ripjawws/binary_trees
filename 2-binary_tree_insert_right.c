#include "binary_trees.h"
/**
 * 
 * 
 * 
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *rightnode;

    binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
    if (newnode == NULL)
    {
        return(NULL);
    }
    
    newnode->n = value;
    newnode->parent = parent;
    newnode->right = NULL;
    newnode->right = NULL;
    rightnode = parent->right;
    parent->right = newnode;

    if(rightnode != NULL)
    {
        newnode->right = rightnode;
        rightnode->parent = newnode;
    }
    return(newnode);

}