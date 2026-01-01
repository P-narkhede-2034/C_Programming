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
FUNCTION NAME : FindPerfect
DESCRIPTION   : Traverses the linked list and checks each node to determine
                whether its data value is a perfect number. If a perfect
                number is found, it returns that number.
INPUT         : PNODE first
OUTPUT        : Integer (perfect number found in the linked list, 0 if none found)
AUTHOR        : Pranav Narkhede
DATE          : 01/01/2026
*/
int FindPerfect(PNODE first)
{
    int perfect = 0;

    while(first != NULL)
    {
        int no = first->data;
        int add = 0;
        int i = 0;

        for(i = 1; i <= no/2; i++)
        {
            if(no % i == 0)
            {
                add = add + i;
            }
        }

        if(no == add)
        {
            perfect = no;
        }

        first = first->next;
    }

    return perfect;
}



int main()
{
    PNODE head = NULL;

    int iret = 0;

     InsertFirst(&head , 6);
      InsertFirst(&head , 51);
     InsertFirst(&head , 101);
    InsertFirst(&head , 28);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);
    Display(head);

    iret = FindPerfect(head);
    printf(" perfect elements in node is %d\n",iret);

    return 0;
}