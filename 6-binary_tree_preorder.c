#include "binary_trees.h"
/**
 * 
 * 
 * 
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    void(*function)(int) = func;

    if(tree == NULL && func == NULL)
    {
        return;
    }
    function(tree->n);
    if (tree->left != NULL)
    {
        binary_tree_preorder(tree->left, function);
    }
    if (tree->right != NULL)
    {
        binary_tree_preorder(tree->right, function);
    }

}