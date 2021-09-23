/*

Accessing Nested Struct Variable.

*/

#include <stdio.h>
#include <stdlib.h>

  struct B{
        int c;
    };

struct A{
    int b;
    struct B bb;
}*aa;


int main() {
    
    aa = malloc(sizeof(struct A));
    aa->bb.c = 10;
    printf("%d",aa->bb.c);
}