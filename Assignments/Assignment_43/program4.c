// singly linear
#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}



void Display(PNODE first)
{
    while( first != NULL)
    {
        printf("| %d | ->", first -> data);
        first = first->next;     
    }
    printf("NULL\n");
}

/*
FUNCTION NAME : AddEven
DESCRIPTION   : find the secound maximum number in linked list
INPUT         : PNODE first
OUTPUT        : Integer
AUTHOR        : Pranav Narkhede
DATE          : 01/01/2026


*/

int SecMax(PNODE first)
{
    int max= 0;

    while(first != NULL)
    {
       max = first->data;
        
        if(max < first->data)
        {
            max = first->data;
        }
        

        first = first->next;
    }

    return max;
}
int main()
{
    PNODE head = NULL;
    int iret = 0;

    InsertFirst(&head , 151);
    InsertFirst(&head , 51);
    InsertFirst(&head , 101);
    InsertFirst(&head , 10);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);

    Display(head);

    iret = SecMax(head);
    printf("secound maximum element in linked list is %d\n", iret);

    return 0;
}
