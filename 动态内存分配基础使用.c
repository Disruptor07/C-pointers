#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("请输入数字：");
    int n;
    scanf("%d",&n);
    int* p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;++i)
    {
        scanf("%d",p+i);
    }
    for(int i=0;i<n;++i)
    {
        printf("%d ",*(p+i));
    }
    free(p);
    p=NULL;
    return 0;
}