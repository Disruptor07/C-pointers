#include<stdio.h>
typedef struct
{
    int x;
    int y;
}point;
void change(point* dot1);
int print(const point* dot2);
void printt(const point* dot2);
int main()
{
    point dot1={2,3};
    point dot2={4,7};
    printf("%d %d\n",dot1.x,dot1.y);
    change(&dot1);
    printf("%d %d\n",dot1.x,dot1.y);
    int n=print(&dot2);
    printf("%d\n",n);
    printt(&dot2);
    return 0;
}
void change(point* dot1)
{
    dot1->x=6;
    dot1->y=9;
    return;
}
int print(const point* dot2)
{
    int n=dot2->y;
    return n;
}
void printt(const point* dot2)
{
    printf("%d",dot2->x);
}