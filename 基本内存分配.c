#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    const int n=5;
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL) return 1;
    for(int i=0;i<n;++i)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;++i)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
    ptr=NULL;
    return 0;
}