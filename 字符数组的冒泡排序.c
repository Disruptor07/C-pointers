#include<stdio.h>
#include<string.h>
void input(char name[][20],int n);
void order(char name[][20],int n);
void output(char name[][20],int n);
int main()
{
    char name[5][20];
    input(name,5);
    order(name,5);
    output(name,5);
    return 0;
}
void input(char name[][20],int n)
{
    for(int i=0;i<n;++i)
    {
        printf("请输入姓名：");
        fgets(name[i],20,stdin);
    }
    return;
}
void order(char name[][20],int n)
{
    for(int i=0;i<n-1;++i)
    {
        for(int j=0;j<n-1-i;++j)
        {
            if(name[j][0]>name[j+1][0])
            {
                char tran[20];
                strcpy(tran,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],tran);
            }
        }
    }
    return;
}
void output(char name[][20],int n)
{
    for(int i=0;i<n;++i)
    {
        printf("%s",name[i]);
    }
    return;
}
