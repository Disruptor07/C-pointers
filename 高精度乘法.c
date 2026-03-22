#include<stdio.h>
#include<string.h>
#define MAX 2000
void turnDtoN(char digita[],int numbera[]);
void multiply(int number1[],int number2[],int finalNumber[]);
void turnNtoD(char finalDigit[],int finalNumber[]);
int main()
{
    char digit1[MAX+1],digit2[MAX+1];
    int number1[MAX]={0},number2[MAX]={0};
    turnDtoN(digit1,number1);
    turnDtoN(digit2,number2);

    int finalNumber[2*MAX+1]={0};
    multiply(number1,number2,finalNumber);

    char finalDigit[2*MAX+1];
    turnNtoD(finalDigit,finalNumber);

    printf("%s",finalDigit);
    return 0;
}
void turnDtoN(char digita[],int numbera[])
{
    fgets(digita,MAX+1,stdin);
    int turn=strcspn(digita,"\n");
    digita[turn]='\0';
    int lengtha=strlen(digita);
    for(int i=0;i<lengtha;++i)
    {
        numbera[i]=digita[lengtha-1-i]-'0';
    }
    return;
}
void multiply(int number1[],int number2[],int finalNumber[])
{
    for(int i=0;i<MAX;++i)
    {
        for(int j=0;j<MAX;++j)
        {
            finalNumber[i+j]+=number1[i]*number2[j];
        }
    }
    for(int k=0;k<2*MAX;++k)
    {
        finalNumber[k+1]+=finalNumber[k]/10;
        finalNumber[k]%=10;
    }
    return;
}
void turnNtoD(char finalDigit[],int finalNumber[])
{
    int judge=0,start=0;
    for(int i=2*MAX-1;i>=0;--i)
    {
        if(finalNumber[i]!=0) judge=1;
        if(judge||i==0)
        {
            finalDigit[start]=finalNumber[i]+'0';
            ++start;
        }
    }
    finalDigit[start]='\0';
    return;
}