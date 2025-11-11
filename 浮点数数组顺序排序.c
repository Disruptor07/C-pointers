#include<stdio.h>
#include<stdlib.h>
#define length 5
int compareDouble(const void *a,const void *b);
int main()
{
    double arr[length]={0};
    for(int i=0;i<length;++i)
    {
        scanf("%lf",&arr[i]);
    }

    qsort(arr,length,sizeof(double),compareDouble);

    for(int i=0;i<length;++i)
    {
        printf("%.2f ",arr[i]);
    }

    return 0;
}
int compareDouble(const void *a,const void *b)
{
    double x=*(double*)a;
    double y=*(double*)b;
    if(x<y) return -1;
    else if(x>y) return 1;
    return 0;
}