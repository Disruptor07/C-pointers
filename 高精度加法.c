#include<stdio.h>
#include<string.h>
void Turnover(int length,char number[],int digit[]);
void Plus(int resulti[],int digit1[],int digit2[],int lengthmax);
int main()
{
    const int lengthmax=20;
    char number1[lengthmax+1];
    char number2[lengthmax+1];
    fgets(number1,sizeof(number1),stdin);
    fgets(number2,sizeof(number2),stdin);
    int clear1=strcspn(number1,"\n");
    number1[clear1]='\0';
    int clear2=strcspn(number2,"\n");
    number2[clear2]='\0';

    int length1=strlen(number1);
    int length2=strlen(number2);
    int digit1[20]={0};
    int digit2[20]={0};
    Turnover(length1,number1,digit1);
    Turnover(length2,number2,digit2);

    int resulti[lengthmax+1];
    Plus(resulti,digit1,digit2,lengthmax);

    char results[lengthmax+2];
    int starti=0,starts=0;
    int j=0;
    for(j=lengthmax;j>=0;--j)
    {
        if(resulti[j]!=0) starti=1;
        if(starti||j==0) results[starts++]=resulti[j]+'0';
    }
    results[starts]='\0';

    printf("%s",results);
    return 0;
}
void Turnover(int length,char number[],int digit[])
{
    for(int i=0;i<length;++i)
    {
        digit[i]=number[length-1-i]-'0';
    }
}
void Plus(int resulti[],int digit1[],int digit2[],int lengthmax)
{
    int passanger=0,i=0;
    for(i=0;i<lengthmax;++i)
    {
        resulti[i]=(digit1[i]+digit2[i]+passanger)%10;
        passanger=(digit1[i]+digit2[i]+passanger)/10;
    }
    resulti[i]=passanger;
}