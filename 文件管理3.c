#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("files/test2.txt","w");
    fputc('h',fp);
    fputc('i',fp);
    fputc('\n',fp);
    fclose(fp);
    fp=fopen("files/test2.txt","a");
    fputs("zswj",fp);
    fclose(fp);
    fp=fopen("files/test2.txt","r");
    char arr[100];
    while(fgets(arr,sizeof(arr),fp)!=NULL)
    {
        printf("%s",arr);
    }
    fclose(fp);
    return 0;
}