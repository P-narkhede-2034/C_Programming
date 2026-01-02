
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
FUNCTION NAME : DisplayDivByThree
DESCRIPTION   : Displays elements divisible by 3 from the linked list
INPUT         : PNODE Head
OUTPUT        : Prints elements
AUTHOR        : Pranav Narkhede
DATE          : 02/01/2026
*/
void DisplayDivByThree(PNODE Head)
{
    while (Head != NULL)
    {
        if ((Head->data % 3) == 0)
        {
            printf("%d ", Head->data);
        }
        Head = Head->next;
    }
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
   DisplayDivByThree(head);


    return 0;
}

