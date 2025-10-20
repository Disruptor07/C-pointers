#include<stdio.h>
int main()
{
    char* name[5]={"Noah","Ella","John","Liam","Mike"};
    for(int i=0;i<4;++i)
    {
        for(int j=0;j<4-i;++j)
        {
            if(name[j][0]>name[j+1][0])
            {
                char* tran=name[j];
                name[j]=name[j+1];
                name[j+1]=tran;
            }
        }
    }
    for(int i=0;i<5;++i)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}