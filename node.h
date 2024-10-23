//
// Created by Joseph on 10/23/2024.
//

#ifndef BTREE_C_NODE_H
#define BTREE_C_NODE_H

#include <stdbool.h>

#define key_type(int)
#define value_type(int)
#ifdef key_type
    typedef int Key;
#endif
#ifdef value_type
    typedef int Value;
#endif

typedef struct{
    Key key;
    Value value;
    bool leaf;
    int number_of_keys;
    struct node{}child;
}node;

node *allocate_node(node *n);
void deallocate_node(node *n);
#endif //BTREE_C_NODE_H
