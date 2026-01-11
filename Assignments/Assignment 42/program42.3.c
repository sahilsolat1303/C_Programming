/////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Description :   Return Addition of all element in singly linear 
//                  linked list.
//  Input :         int
//  Output :        int
//  Auther :        Sahil Subhash Solat
//  Date :          31/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

#pragma pack(1)
struct node
{
    int data;
    struct node *next; 
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
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

int Addition(PNODE first)
{
    int iSum = 0;
    while (first != NULL)
    {
        iSum = iSum + first->data;
        first = first->next;
    }
    return iSum;
        
}

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d | ->",first->data);
        first = first->next;
    }
    printf("NULL\n");
    
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);
    InsertFirst(&head,101);

    Display(head);
    iRet = Addition(head);
    
    printf("Addition of all element is : %d",iRet);
    

    return 0;
}