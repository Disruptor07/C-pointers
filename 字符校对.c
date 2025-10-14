#include<stdio.h>
int comparison(char ch1[],char ch2[]);
int main()
{
    char ch1[]="hello";
    char ch2[]="hello";
    if(comparison(ch1,ch2)==0)
    {
        printf("相等");
    }
    else
    {
        printf("不相等");
    }
    return 0;
}

int comparison(char ch1[],char ch2[])
{
    char *ptr1=ch1;
    char *ptr2=ch2;
    while(*ptr1!='\0'&&*ptr2!='\0'&&*ptr1==*ptr2)
    {
        ++ptr1;
        ++ptr2;
    }
    return *ptr1-*ptr2;
}