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
FUNCTION NAME : Frequency
DESCRIPTION   : Counts how many times the given number appears in the linked list.
INPUT         : PNODE Head, Integer No
OUTPUT        : Integer (frequency of the number)
AUTHOR        : Pranav Narkhede
DATE          : 01/01/2026

*/
int Frequency(PNODE Head, int No)
{
    int count = 0;

    while(Head != NULL)
    {
        if(Head->data == No)
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

    iret = Frequency(head);
    printf("Counts how many times the given number appears : %d\n", iret);

    return 0;
}
