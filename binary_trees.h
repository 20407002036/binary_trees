#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/**
   funcion def for the print
 */
void binary_tree_print(const binary_tree_t *);

/**
   defines the function to create a binary node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/**
   inserts node as left-child of another node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/**
   Create a right child to a node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

#endif
