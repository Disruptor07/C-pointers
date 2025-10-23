#include<stdio.h>
#include<string.h>
int search(char name[][10],int n,char target[]);
int main()
{
    int n;
    printf("请输入要存储的字符串数目：");
    scanf("%d",&n);
    getchar();
    char name[n][10];
    for(int i=0;i<n;++i)
    {
        printf("请输入姓名：");
        fgets(name[i],10,stdin);
    }
    char target[10];
    fgets(target,10,stdin);
    int result=search(name,n,target);
    if(result==-1)
    {
        printf("不存在");
    }
    else
    {
        printf("在第%d位上",result);
    }
    return 0;
}
int search(char name[][10],int n,char target[])
{
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(name[mid][0]==target[0])
        {
            if(strcmp(name[mid],target)==0)
            {
                return mid;
            }
            else
            {
                return -1;
            }
        }
        else if(name[mid][0]<target[0])
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;
}