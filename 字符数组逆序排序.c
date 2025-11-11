#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compareName(const void *a,const void *b);
int main()
{
    char *name[3]={"Alice","John","Park"};

    qsort(name,3,sizeof(char*),compareName);

    for(int i=0;i<3;++i)
    {
        printf("%s\n",name[i]);
    }

    return 0;
}
int compareName(const void *a,const void *b)
{
    char *str1=*(char**)a;
    char *str2=*(char**)b;
    return strcmp(str2,str1);
}