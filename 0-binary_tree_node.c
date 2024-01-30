#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: this points to the parent node of the current node
 * @value : holds the storage data to be stored
 * Return: A pointer to created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

binary_tree_t *node = malloc(sizeof(binary_tree_t));

if (node == NULL)
return (NULL);


node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;

return (node);
}
