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
FUNCTION NAME : DisplayOdd
DESCRIPTION   : Displays only the nodes containing odd values in the linked list.
INPUT         : PNODE Head
OUTPUT        : None
AUTHOR        : Pranav Narkhede
DATE          : 

*/
void DisplayOdd(PNODE Head)
{
    while(Head != NULL)
    {
        if(Head->data % 2 != 0)
        {
            printf("| %d | -> ", Head->data);
        }
        Head = Head->next;
    }
    printf("NULL\n");
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
    DisplayOdd(head);
    
    return 0;
}
