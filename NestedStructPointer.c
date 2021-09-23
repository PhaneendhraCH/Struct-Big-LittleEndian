/*
Accessing Nested Struct Variable using Pointer.
*/
#include <stdio.h>
#include <stdlib.h>

  struct B{
        int c;
    };

struct A{
    int b;
    struct B *bb;
}*aa;


int main() {
    
    aa = malloc(sizeof(struct A));
    aa->bb = malloc(sizeof(struct B));
    int data = aa->bb->c = 10;
    printf("%d",data);
}