#include<stdio.h>
void maxium(int arr[],int n,int* ptr);
int main()
{
    int arr[5]={1,5,6,9,3};
    int max;
    maxium(arr,sizeof(arr)/sizeof(arr[0]),&max);
    printf("最大值是：%d",max);
    return 0;
}

void maxium(int arr[],int n,int* ptr)
{
    *ptr=arr[0];
    for(int i=1;i<n;++i)
    {
        if(arr[i]>*ptr)
        {
            *ptr=arr[i];
        }
    }
}