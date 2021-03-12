#include "binary_trees.h"
/**
 * 
 * 
 * 
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    void(*function)(int) = func;

    if(tree == NULL && func == NULL)
    {
        return;
    }
    if (tree->left != NULL)
    {
        binary_tree_inorder(tree->left, function);
    }
    function(tree->n);
        if (tree->right != NULL)
    {
        binary_tree_inorder(tree->right, function);
    }


}