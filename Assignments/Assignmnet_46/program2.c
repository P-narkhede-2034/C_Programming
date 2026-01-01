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
    while(first != NULL)
    {
        printf("| %d | -> ", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

/*
FUNCTION NAME : DisplayLess
DESCRIPTION   : Prints all nodes having values less than X.
INPUT         : PNODE Head, int X
OUTPUT        : None
AUTHOR        : Pranav Narkhede
DATE          : 01/01/2026
*/
void DisplayLess(PNODE Head, int X)
{
    while(Head != NULL)
    {
        if(Head->data < X)
        {
            printf("| %d | -> ", Head->data);
        }
        Head = Head->next;
    }
    printf("NULL\n");
}



int main()
{
    PNODE head = NULL;
    int iret = 0;

    InsertFirst(&head , 151);
    InsertFirst(&head , 51);
    InsertFirst(&head , 101);
    InsertFirst(&head , 10);
    InsertFirst(&head , 51);
    InsertFirst(&head , 11);

    printf("Linked list: \n");
    Display(head);

    DisplayLess(head , 101);
    return 0;
}
