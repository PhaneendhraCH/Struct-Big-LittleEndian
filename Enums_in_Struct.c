#if 0

    Accessing Enums within a structure in C
    
    Author : Phaneendhra

#endif


#include <stdio.h>
#include <stdlib.h>

typedef enum {a,b,v,d,e} myday; 

struct node{
    
    int data;
    myday day;
    
};


int main()
{
    struct node *p = malloc(sizeof(struct node));
    p->day = a;
    printf("%d\t%d",p->data=10,p->day = d);
    return 0;
}
