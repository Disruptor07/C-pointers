#include<stdio.h>
void mycopy(char ch1[],char ch2[]);
int main()
{
    char first[20];
    char second[20];
    fgets(first,sizeof(first),stdin);
    mycopy(first,second);
    printf("%s",second);
    return 0;
}

void mycopy(char ch1[],char ch2[])
{
    char *p1=ch1;
    char *p2=ch2;
    do
    {
        *p2=*p1;
        ++p1;
        ++p2;
    }while(*p1!='\0');
}