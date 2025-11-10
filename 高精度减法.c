#include<stdio.h>
#include<string.h>
void turnStoD(char digitin[],int numberin[],int lengthMax);
void eliminate(int number[],int number1[],int number2[],int lengthMax);
void turnDtoS(int number[],char digit[],int lengthMax);
int main()
{
    const int lengthMax=20;
    char digit1[lengthMax+1];
    char digit2[lengthMax+1];
    int number1[20]={0};
    int number2[20]={0};
    turnStoD(digit1,number1,lengthMax);
    turnStoD(digit2,number2,lengthMax);

    int number[lengthMax];
    eliminate(number,number1,number2,lengthMax);

    char digit[lengthMax+1];
    turnDtoS(number,digit,lengthMax);

    printf("%s",digit);
    return 0;
}
void turnStoD(char digitin[],int numberin[],int lengthMax)
{
    fgets(digitin,lengthMax+1,stdin);
    int n=strcspn(digitin,"\n");
    digitin[n]='\0';
    int length=strlen(digitin);
    for(int i=0;i<length;++i)
    {
        numberin[i]=digitin[length-1-i]-'0';
    }
    return;
}
void eliminate(int number[],int number1[],int number2[],int lengthMax)
{
    int result;
    int carry=0;
    for(int i=0;i<lengthMax;++i)
    {
        result=number1[i]-number2[i]-carry;
        if(result<0)
        {
            number[i]=result+10;
            carry=1;
        }
        else
        {
            number[i]=result;
            carry=0;
        }
    }
}
void turnDtoS(int number[],char digit[],int lengthMax)
{
    int startCount=0,startPutin=0;
    for(int i=0;i<lengthMax;++i)
    {
        if(number[lengthMax-1-i]!=0) startCount=1;
        if(startCount||i==lengthMax-1)
        {
            digit[startPutin++]=number[lengthMax-1-i]+'0';
        }
    }
    digit[startPutin]='\0';
}