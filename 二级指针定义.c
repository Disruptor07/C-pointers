#include<stdio.h>
int main()
{
    int x=168;
    int* ptr=&x;
    int** pptr=&ptr;
    printf("%d\n",x);
    printf("%d\n",*ptr);
    printf("%d\n",**pptr);
    printf("%p\n",ptr);
    printf("%p\n",*pptr);
    printf("%p",pptr);
    return 0;
}