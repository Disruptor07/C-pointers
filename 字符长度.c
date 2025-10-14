#include<stdio.h>
int mylen(char ch[]);
int main()
{
    char ch[]="hello";
    printf("%d\n",mylen(ch));
    return 0;
}

int mylen(char ch[])
{
    char *ptr=ch;
    while(*ptr!='\0')
    {
        ++ptr;
    }
    return ptr-ch;
}