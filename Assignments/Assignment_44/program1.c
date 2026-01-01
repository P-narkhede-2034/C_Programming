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
FUNCTION NAME : Search
DESCRIPTION   : Checks whether the given number is present in the linked list.
INPUT         : PNODE Head, Integer No
OUTPUT        : Boolean (TRUE or FALSE)
AUTHOR        : Pranav Narkhede
DATE          : 01/01/2026



*/
BOOL Search(PNODE Head, int No)
{
    while(Head != NULL)
    {
        if(Head->data == No)
        {
            return TRUE;
        }
        Head = Head->next;
    }

    return FALSE;
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

   BOOL bret = FALSE;

    bret = Search(head, 21);

    if(bret == TRUE)
    {
        printf("Element is present in linked list\n");
    }
    else
    {
        printf("Element is not present in linked list\n");
    }

    return 0;
}
