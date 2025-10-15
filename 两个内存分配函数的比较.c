#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1;
    int *ptr2;
    const int n=5;
    ptr1=(int*)malloc(n*sizeof(int));
    if(ptr1==NULL) return 1;
    ptr2=(int*)calloc(n,sizeof(int));
    if(ptr2==NULL) return 1;
    for(int i=0;i<n;++i)
    {
        printf("%d ",ptr1[i]);
    }
    printf("\n");
    for(int i=0;i<n;++i)
    {
        printf("%d ",ptr2[i]);
    }
    free(ptr1);
    ptr1=NULL;
    free(ptr2);
    ptr2=NULL;
    return 0;

}