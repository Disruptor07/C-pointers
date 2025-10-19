#include<stdio.h>
typedef struct
{
    int id;
    int score;
}student;
void input(student stu[],int n);
void output(student stu[],int n);
int main()
{
    student stu[5];
    for(int i=0;i<5;++i)
    {
        stu[i].id=1000+i;
    }
    input(stu,5);
    output(stu,5);
    return 0;
}

void input(student stu[],int n)
{
    for(int i=0;i<n;++i)
    {
        scanf("%d",&stu[i].score);
    }
    return;
}

void output(student stu[],int n)
{
    for(int i=0;i<n;++i)
    {
        printf("id:%d score:%d",stu[i].id,stu[i].score);
        printf("\n");
    }
    return;
}