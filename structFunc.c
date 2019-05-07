#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l,int b)
{
    r->breadth = b;
    r->length = l;
}

int area(struct Rectangle r)
{
    return r.length*r.breadth;
}

int main()
{
    struct Rectangle r;
    initialize(&r,10,3);
    printf("Area is %d",area(r));
}