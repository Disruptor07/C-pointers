#include<stdio.h>
int main()
{
    char ch1='a';
    printf("%c\n",ch1);

    char ch2[20];
    fgets(ch2,sizeof(ch2),stdin);
    printf("%s\n",ch2);
    printf("%c",ch2[1]);
    return 0;
}