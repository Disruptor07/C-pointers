#include<stdio.h>
void improve(char charray[],char ch);
int main()
{
    char charray[]="promising";
    char ch='i';
    improve(charray,'i');
    printf("%s",charray);
    return 0;
}

void improve(char charray[],char ch)
{
    char *reader=charray;
    char *writer=charray;
    while(*reader!='\0'){
        if(*reader!=ch)
    {
        *writer=*reader;
        ++writer;
    }
    ++reader;}
    *writer='\0';
}