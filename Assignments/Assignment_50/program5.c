
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
FUNCTION NAME : Displaypos
DESCRIPTION   : Displays the element present at the given position in the linked list
INPUT         : PNODE Head, Integer pos
OUTPUT        : Prints element at specified position
AUTHOR        : Pranav Narkhede
DATE          : 02/01/2026
*/
void Displaypos(PNODE Head, int pos)
{
    int iCnt = 1;

    if (pos <= 0)
    {
        return;
    }

    while (Head != NULL)
    {
        if (iCnt == pos)
        {
            printf("%d ", Head->data);
            return;
        }
        iCnt++;
        Head = Head->next;
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

    Displaypos(head ,3 );

    return 0;
}

