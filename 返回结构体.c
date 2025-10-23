#include<stdio.h>
typedef struct
{
    int x;
    int y;
}point;
point middle(const point* dot1,const point* dot2);
int main()
{
    point dot1={1,3};
    point dot2={5,7};
    point mid=middle(&dot1,&dot2);
    printf("%d %d",mid.x,mid.y);
    return 0;
}
point middle(const point* dot1,const point* dot2)
{
    point mid;
    mid.x=(dot1->x+dot2->x)/2;
    mid.y=(dot1->y+dot2->y)/2;
    return mid;
}