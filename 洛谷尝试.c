#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;++i)
    {
        scanf("%d",&p[i]);
    }
    for(int i=0;i<n;++i)
    {
        int count=0;
        for(int j=0;j<i;++j)
        {
            if(p[j]<p[i])
            {
                ++count;
            }
        }
        printf("%d ",count);
    }
    free(p);
    p=NULL;
    return 0;
}