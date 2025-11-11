#include<stdio.h>
#include<stdlib.h>
#define length 10
int compareInt(const void *a,const void *b);
int main()
{
    int arr[length]={0};
    for(int i=0;i<length;++i)
    {
        scanf("%d",&arr[i]);
    }

    qsort(arr,length,sizeof(int),compareInt);

    for(int i=0;i<length;++i)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
int compareInt(const void *a,const void *b)
{
    int number1=*(int*)a;
    int number2=*(int*)b;
    return number1-number2;
}