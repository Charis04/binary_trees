#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value:  the value to put in the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    node = NULL;
    node = malloc(sizeof(binary_tree_t));
    if (!node)
        return NULL;

    node->left = NULL;
    node->n = value;
    node->parent = parent;
    node->right = NULL;

    return (node);
}