// singly linear
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>   // For bool, true, false

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
FUNCTION NAME : IsEmpty
DESCRIPTION   : Checks whether the linked list is empty.
INPUT         : PNODE Head
OUTPUT        : Boolean (true if empty, false otherwise)
AUTHOR        : Pranav Narkhede
DATE          : 01/01/2026
*/
bool IsEmpty(PNODE Head)
{
    if(Head == NULL)
        return true;
    else
        return false;
}

int main()
{
    PNODE head = NULL;
    bool bret = false;

    InsertFirst(&head , 151);
    InsertFirst(&head , 51);
    InsertFirst(&head , 101);
    InsertFirst(&head , 10);
    InsertFirst(&head , 51);
    InsertFirst(&head , 11);

    printf("Linked list: \n");
    Display(head);

    bret = IsEmpty(head);

    if(bret == true)
        printf("Linked list is empty\n");
    else
        printf("Linked list is not empty\n");

    return 0;
}
