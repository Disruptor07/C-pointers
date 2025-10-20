#include<stdio.h>
int main()
{
    char* language[5]={"C","C++","Python","Java","Go"};
    printf("%c %c\n",language[0][0],language[2][2]);
    for(int i=0;i<5;++i)
    {
        printf("%s\n",language[i]);
    }
    return 0;
}