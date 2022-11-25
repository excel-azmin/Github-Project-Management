// Stack in C programming

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100 

typedef struct node
{
    int data;
    struct node *next;
}node;

node *top = NULL;

void push(int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = top;
    top = newnode;
}

int pop()
{
    int data;
    node *temp = top;
    if(top == NULL)
    {
        printf("Stack is empty"); 
        return -1;
    }
    data = temp->data;
    top = top->next;
    free(temp);
    return data;
}


int main()
{
    int i;
    for(i = 0; i < MAX; i++)
    {
        push(i);
    }
    for(i = 0; i < MAX; i++)
    {
        printf("%d  ", pop());
    }
    return 0;
}

:

