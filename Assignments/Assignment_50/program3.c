
// singly linear
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
FUNCTION NAME : CheckSorted
DESCRIPTION   : Checks whether the linked list is sorted in ascending order
INPUT         : PNODE Head
OUTPUT        : true if sorted, otherwise false
AUTHOR        : Pranav Narkhede
DATE          : 02/01/2026
*/
bool CheckSorted(PNODE Head)
{
    if (Head == NULL)
    {
        return true;
    }

    while (Head->next != NULL)
    {
        if (Head->data > Head->next->data)
        {
            return false;
        }
        Head = Head->next;
    }

    return true;
}


int main()
{
    PNODE head = NULL;
    bool bret = 0;

    InsertFirst(&head , 6);
    InsertFirst(&head , 51);
    InsertFirst(&head , 151);
    InsertFirst(&head , 17);
    InsertFirst(&head , 173);
    InsertFirst(&head , 11);

    Display(head);

    bret = CheckSorted(head);

    if(bret ==  false)
    {
        printf("list is not sorted ");
    }
    else
    {
        printf("list is sorted");
    }

    return 0;
}

