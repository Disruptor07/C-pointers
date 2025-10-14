#include<stdio.h>
void mycopy(char reserved[],char target[]);
int main()
{
    char target[20];
    char reserved[]="promising";
    mycopy(reserved,target);
    printf("%s\n",target);
    return 0;
}

void mycopy(char reserved[],char target[])
{
    int i=0;
    while(*(reserved+i)!='\0')
    {
        *(target+i)=*(reserved+i);
        ++i;
    }
    *(target+i)='\0';
}