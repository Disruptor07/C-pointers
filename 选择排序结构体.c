#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
    char name[20];
    int score;
}student;
void input(student* stu);
void order(student* stu[]);
void output(student* stu);
int main()
{
    student* stu[3];
    for(int i=0;i<3;++i)
    {
        stu[i]=(student*)malloc(sizeof(student));
    }
    for(int i=0;i<3;++i)
    {
        input(stu[i]);
    }
    order(stu);
    printf("排序结果是：\n");
    for(int i=0;i<3;++i)
    {
        output(stu[i]);
    }
    for(int i=0;i<3;++i)
    {
        free(stu[i]);
        stu[i]=NULL;
    }
    return 0;
}
void input(student* stu)
{
    printf("请输入姓名：");
    fgets(stu->name,sizeof(stu->name),stdin);
    printf("请输入成绩：");
    scanf("%d",&stu->score);
    getchar();
}
void order(student* stu[])
{
    for(int i=0;i<2;++i)
    {
        int low=i;
        for(int j=i+1;j<3;++j)
        {
            if(stu[low]->score>stu[j]->score)
            {
                low=j;
            }
        }
        student* stutran=stu[low];
        stu[low]=stu[i];
        stu[i]=stutran;
        stutran=NULL;
    }
}
void output(student* stu)
{
    printf("%d ",stu->score);
    printf("%s",stu->name);
}