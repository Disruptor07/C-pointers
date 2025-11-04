#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("files/test1.txt","w");
    if(fp==NULL) return 1;
    fclose(fp);
    return 0;
}