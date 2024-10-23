/**
 * Joe Scollo
 *
 *  A BTREE inspired by pseudo code from intro t algorithms.
 */

#include <stdio.h>
#include "node.h"
int main() {
    node *x = NULL;

    x = allocate_node(x);
    printf("key: %d\n", x->key);
    deallocate_node(x);
    return 0;
}
