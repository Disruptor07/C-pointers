#include<stdio.h>
void swap_ptr(int** pf,int** ps);
int main()
{
    int first=1;
    int second=2;
    int* pf=&first;
    int* ps=&second;
    swap_ptr(&pf,&ps);
    printf("%d %d",*pf,*ps);
    return 0;
}

void swap_ptr(int** pf,int** ps)
{
    int* pc=*pf;
    *pf=*ps;
    *ps=pc;
    return;
}