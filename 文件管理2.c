#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("files/zifuchuan.txt","w");
    fputs("hello world!",fp);
    fclose(fp);
    fp=NULL;
    fp=fopen("files/zifuchuan.txt","r");
    char ch[100];
    fgets(ch,sizeof(ch),fp);
    printf("%s",ch);
    fclose(fp);
    fp=NULL;
    return 0;
}