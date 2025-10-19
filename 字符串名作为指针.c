#include<stdio.h>
int main()
{
    char* array="hello";
    printf("%c\n",*(array+2));
    char* p=array;
    while(*p!='\0')
    {
        printf("%c ",*p);
        ++p;
    }
    return 0;
}