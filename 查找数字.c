#include<stdio.h>
#include<stdlib.h>
int search(int arr[],int size,int target);
int main()
{
    printf("请输入数字数：");
    int n;
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL) return 1;
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    printf("请输入目标：");
    int target;
    scanf("%d",&target);
    int result=search(arr,n,target);
    if(result==-1)
    {
        printf("不存在");
    }
    else
    {
        printf("在第%d位",result);
    }
    free(arr);
    arr=NULL;
    return 0;
}
int search(int arr[],int size,int target)
{
    int left=0;
    int right=size-1;
    int mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
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