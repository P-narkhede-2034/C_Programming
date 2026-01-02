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
FUNCTION NAME : SumDigit
DESCRIPTION   : Calculates the sum of digits of each element in the linked list
                and stores the result back into the respective node.
INPUT         : PNODE first
OUTPUT        : None
AUTHOR        : Pranav Narkhede
DATE          : 01/01/2026
*/

void SumDigit(PNODE first)
{
    while(first != NULL)
    {
        int idigit = 0;
        int isum = 0;
        int no = first->data;

        while(no != 0)
        {
            idigit = no % 10;
            isum = isum + idigit;
            no = no / 10;
        }

        first->data = isum;
        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head , 151);
    InsertFirst(&head , 51);
    InsertFirst(&head , 101);
    InsertFirst(&head , 10);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);

    Display(head);

    SumDigit(head);     
    Display(head);      

    return 0;
}
