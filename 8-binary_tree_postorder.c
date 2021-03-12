#include "binary_trees.h"
/**
 * 
 * 
 * 
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    void(*function)(int) = func;

    if(tree == NULL && func == NULL)
    {
        return;
    }
    if (tree->left != NULL)
    {
        binary_tree_postorder(tree->left, function);
    }
    if (tree->right != NULL)
    {
        binary_tree_postorder(tree->right, function);
    }
    function(tree->n);
    

}
