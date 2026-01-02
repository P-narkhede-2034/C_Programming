
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
FUNCTION NAME : DisplayGreaterThanAverage
DESCRIPTION   : Displays elements which are greater than average of linked list
INPUT         : PNODE first
OUTPUT        : Prints elements
AUTHOR        : Pranav Narkhede
DATE          : 02/01/2026
*/
void DisplayGreaterThanAverage(PNODE first)
{

    PNODE temp = NULL;
    temp = first;
    int total = 0;
    int count = 0;
   
    while(first != NULL)
    {
        total = total + first->data;
        count ++;
        first = first ->next;
    }

     int average = total / count;

     while(temp != NULL)
     {
        int no = temp->data;

        if(no > average)
        {
            printf("%d\t",no);
        }

        temp = temp->next;
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

    DisplayGreaterThanAverage(head);

    return 0;
}

