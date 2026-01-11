/////////////////////////////////////////////////////////////////////
//
//  Function Name : Minimum
//  Description :   Return smallest element in singly linear 
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

int Minimum(PNODE first)
{
    int iMin = first->data;
    while (first != NULL)
    {
        if(first->data < iMin)
        {
            iMin = first->data;
        }
        first = first->next;
    }
    return iMin;
        
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

    InsertFirst(&head,110);
    InsertFirst(&head,230);
    InsertFirst(&head,320);
    InsertFirst(&head,240);

    Display(head);
    iRet = Minimum(head);
    
    printf("Smallest element is : %d",iRet);
    

    return 0;
}