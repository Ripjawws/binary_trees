#include "binary_trees.h"
/**
 * 
 * 
 * 
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *leftnode;

    binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
    if (newnode == NULL)
    {
        return(NULL);
    }
    
    newnode->n = value;
    newnode->parent = parent;
    newnode->left = NULL;
    newnode->right = NULL;
    leftnode = parent->left;
    parent->left = newnode;

    if(leftnode != NULL)
    {
        newnode->left = leftnode;
        leftnode->parent = newnode;
    }
    return(newnode);

}
