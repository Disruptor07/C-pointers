#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int id;
    char name[20];
}student;
int main()
{
    student* ptr;
    ptr=(student*)malloc(sizeof(student));
    if(ptr==NULL) return 1;
    printf("请输入学号：");
    scanf("%d",&ptr->id);
    getchar();
    printf("请输入姓名：");
    fgets(ptr->name,sizeof(ptr->name),stdin);
    printf("你的学号是：%d 你的姓名是：%s",ptr->id,ptr->name);
    free(ptr);
    ptr=NULL;
    return 0;
}