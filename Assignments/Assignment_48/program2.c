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
FUNCTION NAME : ReplaceOdd
DESCRIPTION   : Replaces all odd elements in the linked list with 1
INPUT         : PPNODE Head
OUTPUT        : None
AUTHOR        : Pranav Narkhede
DATE          : 02/01/2026
*/
void ReplaceOdd(PPNODE Head)
{
    PNODE temp = *Head;

    while (temp != NULL)
    {
        if ((temp->data % 2) != 0)
        {
            temp->data = 1;
        }
        temp = temp->next;
    }
}


int main()
{
    PNODE head = NULL;
    int iret = 0;

    InsertFirst(&head , 6);
    InsertFirst(&head , 51);
    InsertFirst(&head , 101);
    InsertFirst(&head , 17);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);

    Display(head);
    ReplaceOdd (&head);
     Display(head);

    return 0;
}

