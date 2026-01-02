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
FUNCTION NAME : ReplaceNegative
DESCRIPTION   : Replaces negative values in the linked list with zero.
INPUT         : PPNODE Head
OUTPUT        : None
AUTHOR        : Pranav Narkhede
DATE          : 01/01/2026
*/
void ReplaceNegative(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if(temp->data < 0)
            temp->data = 0;

        temp = temp->next;
    }
}


/*
FUNCTION NAME : DisplayReverse
DESCRIPTION   : Displays the linked list in reverse order 
INPUT         : PNODE Head
OUTPUT        : Prints elements in reverse order
AUTHOR        : Pranav Narkhede
DATE          : 02/01/2026
*/

void DisplayReverse(PNODE Head)
{
    int arr[100];    
    int i = 0;

    PNODE temp = Head;

   
    while (temp != NULL)
    {
        arr[i] = temp->data;
        i++;
        temp = temp->next;
    }

   
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
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


    DisplayReverse(head);


    return 0;
}
