#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("您将输入字母数：");
    int n;
    scanf("%d",&n);
    getchar();
    char* p=(char*)malloc((n+2)*sizeof(char));
    if(p==NULL) return 1;
    fgets(p,n+2,stdin);
    for(int i=0;i<n;++i)
    {
        printf("%c ",*(p+i));
    }
    free(p);
    p=NULL;
    return 0;
}