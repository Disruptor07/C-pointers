#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    char name[10];
    double score;
}student;
int compareStudent(const void* a,const void* b);
int main()
{
    student students[3]={{"Alice",99.9},{"Bob",98.8},{"Dan",98.8}};

    qsort(students,3,sizeof(student),compareStudent);

    for(int i=0;i<3;++i)
    {
        printf("%s\t%f\t\n",students[i].name,students[i].score);
    }

    return 0;
}
int compareStudent(const void* a,const void* b)
{
    student* stu1=(student*)a;
    student* stu2=(student*)b;
    if(stu1->score!=stu2->score)
    {
        if(stu1->score>stu2->score) return -1;
        else return 1;
    }
    else
    {
        return strcmp(stu2->name,stu1->name);
    }
}