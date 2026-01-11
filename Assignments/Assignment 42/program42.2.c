/////////////////////////////////////////////////////////////////////
//
//  Function Name : SearchLastOcc
//  Description :   Return last occurrence in singly linear linked list.
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

int SearchLastOcc(PNODE first, int no)
{
    int pos = 1;
    int lastpos = -1;
    PNODE temp = first;
    while (temp != NULL)
    {
       if(temp->data == no)
       {
            lastpos = pos;
       }
       temp = temp->next;
       pos++;
    }
    return lastpos;
    
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
    
    int iValue=0;
    printf("Input element:\n");
    scanf("%d",&iValue);

    iRet = SearchFirstOcc(head,iValue);
    
    printf("Element is found in : %d",iRet);
    

    return 0;
}