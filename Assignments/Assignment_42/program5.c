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
FUNCTION NAME : LargestElements
DESCRIPTION   : Traverses the linked list and returns the smallest element
                present in the linked list.
INPUT         : PNODE first
OUTPUT        : Integer (smallest data value from the linked list)
AUTHOR        : Pranav Narkhede
DATE          : 01/01/2026

*/

int SmallestElements(PNODE first)
{
    int smallno = 0;

    smallno = first->data;

    while(first != NULL)
    {
       if( smallno > first->data)
       {
             smallno = first->data;
       }

        first = first->next;
    }

    return smallno;
}


int main()
{
    PNODE head = NULL;

    int iret = 1;

     InsertFirst(&head , 121);
      InsertFirst(&head , 51);
     InsertFirst(&head , 101);
    InsertFirst(&head , 51);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);
    Display(head);

    iret = SmallestElements(head );
    printf(" smallest elements in node is %d\n",iret);






    return 0;
}