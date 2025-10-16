#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int size;
    int capacity;
    int* data;
}dynamicarr;

dynamicarr* create_dynamicarr();
void enlarge_dynamicarr(dynamicarr* arr,int input);
void output_dynamicarr(dynamicarr* arr);
void clean_dynamicarr(dynamicarr* arr);
int main()
{
    dynamicarr* arr=create_dynamicarr();
    for(int i=0;i<7;++i)
    {
        enlarge_dynamicarr(arr,i*10);
        output_dynamicarr(arr);
    }
    clean_dynamicarr(arr);
    return 0;
}

dynamicarr* create_dynamicarr()
{
    dynamicarr* arr=(dynamicarr*)malloc(sizeof(arr));
    arr->size=0;
    arr->capacity=5;
    arr->data=(int*)malloc(arr->capacity*sizeof(int));
}

void enlarge_dynamicarr(dynamicarr* arr,int input)
{
    if(arr->size>=arr->capacity)
    {
        arr->capacity*=2;
        arr->data=(int*)realloc(arr->data,arr->capacity*sizeof(int));
    }
    arr->data[arr->size]=input;
    ++arr->size;
}

void output_dynamicarr(dynamicarr* arr)
{
    for(int i=0;i<arr->size;++i)
    {
        printf("%d ",arr->data[i]);
    }
    printf("\n");
}

void clean_dynamicarr(dynamicarr* arr)
{
    free(arr->data);
    free(arr);
}