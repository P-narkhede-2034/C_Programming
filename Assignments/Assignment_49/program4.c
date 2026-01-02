
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
FUNCTION NAME : CountDivByFive
DESCRIPTION   : Counts elements divisible by 5 in the linked list
INPUT         : PNODE Head
OUTPUT        : Integer count
AUTHOR        : Pranav Narkhede
DATE          : 02/01/2026
*/
int CountDivByFive(PNODE Head)
{
    int iCnt = 0;

    while (Head != NULL)
    {
        if ((Head->data % 5) == 0)
        {
            iCnt++;
        }
        Head = Head->next;
    }

    return iCnt;
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
   iret = CountDivByFive(head);
    printf("the count of divisibel of 5  %d",iret);


    return 0;
}

