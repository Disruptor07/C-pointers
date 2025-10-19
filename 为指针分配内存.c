#include<stdio.h>
#include<stdlib.h>
void alloctoptr(int** ptr);
int main()
{
    int* ptr;
    alloctoptr(&ptr);
    printf("%d",*ptr);
    free(ptr);
    ptr=NULL;
    return 0;
}

void alloctoptr(int** ptr)
{
    *ptr=(int*)malloc(sizeof(int));
    **ptr=100;
}