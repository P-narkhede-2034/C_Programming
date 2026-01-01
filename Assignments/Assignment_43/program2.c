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
FUNCTION NAME : FindPrime
DESCRIPTION   : Traverses the linked list and checks each node to determine
                whether its data value is a prime number. If a prime
                number is found, it returns that number.
INPUT         : PNODE first
OUTPUT        : Integer (prime number found in the linked list, 0 if none found)
AUTHOR        : Pranav Narkhede
DATE          : 01/01/2026

*/

int FindPrime(PNODE first)
{
    int prime = 0;

    while(first != NULL)
    {
        int no = first->data;
        int i = 0;
        int flag = 1;

        if(no <= 1)
        {
            flag = 0;
        }

        for(i = 2; i <= no / 2; i++)
        {
            if(no % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            prime = no;   
        }

        first = first->next;
    }

    return prime;
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

    iret = FindPrime(head);
    printf("Last prime element in linked list is %d\n", iret);

    return 0;
}
