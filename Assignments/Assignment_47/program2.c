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
        *first = newn;
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
FUNCTION NAME : CountDigit
DESCRIPTION   : count the digit and print 
INPUT         : PNODE Head
OUTPUT        : Integer(no of digit)
AUTHOR        : Pranav Narkhede
DATE          : 02/01/2026
*/

void CountDigit(PNODE first)
{
     

    while(first != NULL)
    {
        int idigit = 0;
        int icount = 0;
        int no = first->data;

        while(no != 0)
        {
            idigit = no % 10;
            icount ++;
            no = no / 10;
        }

       
        printf("%d\t", icount);
        first = first->next;
    }

}


int main()
{
    PNODE head = NULL;

    InsertFirst(&head , 151);
    InsertFirst(&head , 51);
    InsertFirst(&head , 101);
    InsertFirst(&head , -9);
    InsertFirst(&head , 51);
    InsertFirst(&head , 11);

   
    Display(head);


    CountDigit(head);
   return 0;
}
