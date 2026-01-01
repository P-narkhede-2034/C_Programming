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
FUNCTION NAME : AddEven
DESCRIPTION   : Traverses the linked list and calculates the addition of all
                even data elements present in the linked list.
INPUT         : PNODE first
OUTPUT        : Integer (sum of all even elements in the linked list)
AUTHOR        : Pranav Narkhede
DATE          : 01/01/2026


*/

int AddEven(PNODE first)
{
    int total = 0;

    while(first != NULL)
    {
        int no = first->data;
        
        if(no % 2 == 0)
        {
            total = total + no;
        }
        

        first = first->next;
    }

    return total;
}
int main()
{
    PNODE head = NULL;
    int iret = 0;

    InsertFirst(&head , 6);
    InsertFirst(&head , 51);
    InsertFirst(&head , 101);
    InsertFirst(&head , 10);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);

    Display(head);

    iret = AddEven(head);
    printf("addition of even element in linked list is %d\n", iret);

    return 0;
}
