#include<stdio.h>
#include<ctype.h>
void statistic(char ch[]);
int main()
{
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    statistic(ch);
    return 0;
}

void statistic(char ch[])
{
    char *p=ch;
    int upper=0,lower=0,space=0;
    while(*p!='\0'){
    if(isupper(*p))
    {
        ++upper;
    }
    else if(islower(*p))
    {
        ++lower;
    }
    else
    {
        ++space;
    }
    ++p;}
    printf("%d  %d  %d",upper,lower,space);
}