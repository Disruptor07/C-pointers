#include<stdio.h>
#include<string.h>
void eliminate(char ch[]);
int main()
{
    char ch[20];
    fgets(ch,sizeof(ch),stdin);
    printf("处理前：%ld\n",strlen(ch));
    eliminate(ch);
    printf("处理后：%ld",strlen(ch));
    return 0;
}
void eliminate(char ch[])
{
    for(int i=0;ch[i]!='\0';++i)
    {
        if(ch[i]=='\n')
        {
            ch[i]='\0';
            break;
        }
    }
    return;
}