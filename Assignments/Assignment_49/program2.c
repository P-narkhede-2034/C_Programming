
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
FUNCTION NAME : CheckAllPositive
DESCRIPTION   : Checks whether all elements in the linked list are positive
INPUT         : PNODE Head
OUTPUT        : true if all positive, otherwise false
AUTHOR        : Pranav Narkhede
DATE          : 02/01/2026
*/
bool CheckAllPositive(PNODE Head)
{
    while (Head != NULL)
    {
        if (Head->data <= 0)
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
    InsertFirst(&head , 101);
    InsertFirst(&head , 17);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);

    Display(head);
   bret = CheckAllPositive(head);
   
   if(bret == false)
   {
    printf("linked list contain negative value\n");
   }
   else
   {
    printf("linked list contain all positive number\n") ;
   }
     

    return 0;
}

