#include<stdio.h>
typedef struct point
{
    double x;
    double y;
}point;
int main()
{
    point p1={1.0,2.0};
    point p2={3.5,4.8};
    printf("%f\n",p1.x);
    point* ptr1=&p1;
    ptr1->x=10.0;
    printf("%f\n",ptr1->x);
    printf("%f\n",p1.x);
    return 0;
}