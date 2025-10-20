#include<stdio.h>
#include<stdlib.h>
int main()
{
    int capacity=5;
    int size=0;
    int* p=(int*)malloc(capacity*sizeof(int));
    if(p==NULL) return 1;
    int n;
    scanf("%d",&n);
    while(n!=-1)
    {
        if(size==capacity)
        {
            capacity*=2;
            int* tran=(int*)realloc(p,capacity*sizeof(int));
            if(tran==NULL)
            {
                free(p);
                return 1;
            }
            else
            {
                p=tran;
                tran=NULL;
            }
        }
        p[size]=n;
        ++size;
        scanf("%d",&n);
    }
    for(int i=0;i<size;++i)
    {
        printf("%d ",*(p+i));
    }
    free(p);
    p=NULL;
    return 0;
}