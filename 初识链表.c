#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int number;
    struct node *next;
}node;
node* create_node(int number);
void print_list(node *head);
int main()
{
    node *head=create_node(10);
    head->next=create_node(20);
    head->next->next=create_node(30);
    print_list(head);
    head=NULL;
    return 0;
}
node* create_node(int number)
{
    node *new_node=(node*)malloc(sizeof(node));
    new_node->number=number;
    new_node->next=NULL;
}
void print_list(node *head)
{
    node *current=head;
    while(current!=NULL)
    {
        printf("%d->",current->number);
        node *next=current->next;
        free(current);
        current=next;
    }
    printf("NULL\n");
}