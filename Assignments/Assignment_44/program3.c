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
FUNCTION NAME : CountOdd
DESCRIPTION   : Counts the number of nodes having odd values in the linked list.
INPUT         : PNODE Head
OUTPUT        : Integer
AUTHOR        : Pranav Narkhede
DATE          : 01/01/2026
*/
int CountOdd(PNODE Head)
{
    int count = 0;

    while(Head != NULL)
    {
        if(Head->data % 2 != 0)
        {
            count++;
        }
        Head = Head->next;
    }

    return count;
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

    iret = CountOdd(head);
    printf("Number of odd elements are : %d\n", iret);

    return 0;
}
