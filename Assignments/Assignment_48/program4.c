
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
FUNCTION NAME : DisplayEvenPosition
DESCRIPTION   : Displays elements present at even positions in the linked list
INPUT         : PNODE Head
OUTPUT        : Prints elements
AUTHOR        : Pranav Narkhede
DATE          : 02/01/2026
*/
void DisplayEvenPosition(PNODE Head)
{
    int iPos = 1;
    PNODE temp = Head;

    while (temp != NULL)
    {
        if ((iPos % 2) == 0)
        {
            printf("%d ", temp->data);
        }
        iPos++;
        temp = temp->next;
    }
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
    DisplayEvenPosition(head);
     

    return 0;
}





