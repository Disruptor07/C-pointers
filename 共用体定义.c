#include<stdio.h>
#include<string.h>
union student
{
    int id;
    char name[10];
    double score;
};
int main()
{
    union student stu;
    scanf("%d",&stu.id);
    printf("%d",stu.id);
    return 0;
}