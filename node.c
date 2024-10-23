//
// Created by Joseph on 10/23/2024.
//

#include <malloc.h>
#include <mem.h>
#include "node.h"

node *allocate_node(node *n){
    n = malloc(sizeof (node));
    memset(n, -1, sizeof (node));
    return n;
}

void deallocate_node(node *n){
    free(n);
}

