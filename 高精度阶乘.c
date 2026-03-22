#include<stdio.h>
void factorial(int result[],int n,int* digit);
int main()
{
    int result[10]={0};
    result[0]=1;
    int digit=1;
    for(int i=0;i<5;++i)
    {
        factorial(result,i+1,&digit);
    }
    
    for(int i=0;i<digit;++i)
    {
        printf("%d",result[digit-1-i]);
    }
    return 0;
}
void factorial(int result[],int n,int* digit)
{
    for(int i=0;i<*digit;++i)
    {
        result[i]*=n;
    }
    int j=0;
    do
    {
        result[j+1]+=result[j]/10;
        result[j]%=10;
        ++j;
    }while(result[j]!=0);
    *digit=j;
}