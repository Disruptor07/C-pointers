#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int id;
    char* name;
    int score;
}student;
void input(student* stu,int n);
void output(student* stu);
void freeing(student* stu);
int main()
{
    student* stu;
    stu=(student*)malloc(sizeof(student));
    if(stu==NULL) return 1;
    int n;
    printf("姓名长度：");
    scanf("%d",&n);
    getchar();
    stu->name=(char*)malloc(n*sizeof(char));
    if(stu->name==NULL) return 1;
    input(stu,n);
    output(stu);
    freeing(stu);
    return 0;
}
void input(student* stu,int n)
{
    printf("学号：");
    scanf("%d",&stu->id);
    getchar();
    printf("姓名：");
    fgets(stu->name,n,stdin);
    printf("成绩：");
    scanf("%d",&stu->score);
    getchar();
}
void output(student* stu)
{
    printf("学号：%d\n",stu->id);
    printf("姓名：%s",stu->name);
    printf("分数：%d\n",stu->score);
}
void freeing(student* stu)
{
    free(stu->name);
    stu->name=NULL;
    free(stu);
    stu=NULL;
}