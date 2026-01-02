
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
FUNCTION NAME : Difference
DESCRIPTION   : Calculates the difference between maximum and minimum element
INPUT         : PNODE Head
OUTPUT        : Integer difference (Max - Min)
AUTHOR        : Pranav Narkhede
DATE          : 02/01/2026
*/
int Difference(PNODE Head)
{
    int iMax = 0;
    int iMin = 0;

    if (Head == NULL)
    {
        return 0;
    }

    iMax = Head->data;
    iMin = Head->data;

    while (Head != NULL)
    {
        if (Head->data > iMax)
        {
            iMax = Head->data;
        }
        if (Head->data < iMin)
        {
            iMin = Head->data;
        }
        Head = Head->next;
    }

    return (iMax - iMin);
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
   iret = Difference(head);
   printf("difference between mix and min %d",iret);
     

    return 0;
}





