
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
FUNCTION NAME : CountTwoDigit
DESCRIPTION   : Counts elements which are two-digit numbers
INPUT         : PNODE Head
OUTPUT        : Integer count
AUTHOR        : Pranav Narkhede
DATE          : 02/01/2026
*/
int CountTwoDigit(PNODE Head)
{
    int count = 0;

    while(Head != NULL)
    {
        int no = Head->data;
        int icount = 0;
        int idigit = 0;

        while(no != 0)
        {
            idigit = no % 10;
            no = no / 10;
            icount ++;    
        }

        if(icount == 2)
        {
            count ++;
        }

        Head = Head->next;
    }
    return count;
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
   iret = CountTwoDigit(head);
    printf("the count of digit is 2  =  %d",iret);


    return 0;
}

