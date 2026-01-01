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
        *first = newn;
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
FUNCTION NAME : ReplaceNegative
DESCRIPTION   : Replaces negative values in the linked list with zero.
INPUT         : PPNODE Head
OUTPUT        : None
AUTHOR        : Pranav Narkhede
DATE          :
*/
void ReplaceNegative(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if(temp->data < 0)
            temp->data = 0;

        temp = temp->next;
    }
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head , 151);
    InsertFirst(&head , 51);
    InsertFirst(&head , 101);
    InsertFirst(&head , -9);
    InsertFirst(&head , 51);
    InsertFirst(&head , 11);

    printf("Linked list before replacing negative numbers: \n");
    Display(head);

    ReplaceNegative(&head);

    printf("Linked list after replacing negative numbers: \n");
    Display(head);

    return 0;
}
