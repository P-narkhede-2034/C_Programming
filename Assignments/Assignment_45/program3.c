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
FUNCTION NAME : LastOccur
DESCRIPTION   : Returns the position of last occurrence of given number.
INPUT         : PNODE Head, int No
OUTPUT        : Integer (position or -1 if not found)
AUTHOR        : Pranav Narkhede
DATE          : 



*/
int LastOccur(PNODE Head, int No)
{
    int pos = 1;
    int lastPos = -1;

    while(Head != NULL)
    {
        if(Head->data == No)
        {
            lastPos = pos;
        }
        Head = Head->next;
        pos++;
    }

    return lastPos;
}





int main()
{
    PNODE head = NULL;
    int iret = 0;

    InsertFirst(&head , 151);
    InsertFirst(&head , 51);
    InsertFirst(&head , 101);
    InsertFirst(&head , 10);
    InsertFirst(&head , 51);
    InsertFirst(&head , 11);

    Display(head);
    iret = LastOccur(head ,51);
    printf("last occrance ", iret);
    
    return 0;
}
