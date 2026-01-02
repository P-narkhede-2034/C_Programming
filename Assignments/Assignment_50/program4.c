
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
FUNCTION NAME : DisplayAlternate
DESCRIPTION   : Displays alternate nodes from the linked list starting from first node
INPUT         : PNODE Head
OUTPUT        : Prints alternate elements
AUTHOR        : Pranav Narkhede
DATE          : 02/01/2026
*/
void DisplayAlternate(PNODE Head)
{
    int iPos = 1;

    while (Head != NULL)
    {
        if ((iPos % 2) != 0)
        {
            printf("%d ", Head->data);
        }
        iPos++;
        Head = Head->next;
    }
}



int main()
{
    PNODE head = NULL;
    int iret = 0;

    InsertFirst(&head , 6);
    InsertFirst(&head , 51);
    InsertFirst(&head , 151);
    InsertFirst(&head , 17);
    InsertFirst(&head , 173);
    InsertFirst(&head , 11);

    Display(head);

    DisplayAlternate(head);

    return 0;
}

