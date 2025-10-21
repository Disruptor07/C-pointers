#include<stdio.h>
#include<string.h>
typedef struct
{
    int id;
    char name[20];
    float score;
}student;
void input(student stu[],int n);
void output(student stu[],int n);
int main()
{
    printf("输入学生数量：");
    int n;
    scanf("%d",&n);
    getchar();
    student stu[n];
    input(stu,n);
    output(stu,n);
    return 0;
}
void input(student stu[],int n)
{
    for(int i=0;i<n;++i)
    {
        printf("学号：");
        scanf("%d",&stu[i].id);
        getchar();
        printf("姓名：");
        fgets(stu[i].name,20,stdin);
        int e=strcspn(stu[i].name,"\n");
        stu[i].name[e]='\0';
        printf("成绩：");
        scanf("%f",&stu[i].score);
        getchar();
    }
    return;
}
void output(student stu[],int n)
{
    printf("学号\t姓名\t成绩\t\n");
    for(int i=0;i<n;++i)
    {
        printf("%d\t%s\t%f\t\n",stu[i].id,stu[i].name,stu[i].score);
    }
    return;
}