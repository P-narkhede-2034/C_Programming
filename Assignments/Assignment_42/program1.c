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
FUNCTION NAME : SearchFirstOcc
DESCRIPTION   : Searches the linked list and returns the position of the first
                occurrence of the given element.
INPUT         : PNODE first, Integer no
OUTPUT        : Integer (position of first occurrence, -1 if element not found)
AUTHOR        : Pranav Narkhede
DATE          : 01/01/2026

*/
int SearchFirstOcc(PNODE first, int no)
{
    int occ = 1;

    while (first != NULL)
    {
        if (first->data == no)
        {
            return occ;
        }

        occ++;
        first = first->next;
    }

    return -1;
}


int main()
{
    PNODE head = NULL;

    int iret = 1;

     InsertFirst(&head , 101);
    InsertFirst(&head , 51);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);
    Display(head);

    iret = SearchFirstOcc(head , 51);
    printf("Number of occ are %d\n",iret);






    return 0;
}