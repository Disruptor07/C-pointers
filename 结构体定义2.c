#include<stdio.h>
#include<string.h>
typedef struct
{
    char name[20];
    float score;
}student;
int main()
{
    student stu;
    fgets(stu.name,sizeof(stu.name),stdin);
    scanf("%f",&stu.score);
    printf("%s",stu.name);
    printf("%f\n",stu.score);
    return 0;
}