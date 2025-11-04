#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("files/study.txt","w");
    fputc('f',fp);
    fputc('o',fp);
    fputc('c',fp);
    fputc('u',fp);
    fputc('s',fp);
    fclose(fp);
    fp=NULL;
    fp=fopen("files/study.txt","r");
    char ch;
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF) break;
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    fp=NULL;
    return 0;
}