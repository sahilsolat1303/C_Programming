/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//
//  Function Name:  ChkSmall
//  Description:    It is use to check whether it is 
//                  digit or not 
//  Input:          Charater
//  Output:         Boolen
//  Author:         Sahil Subhash Solat
//  Date:           27/11/2025
//
/////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
        if((ch>='a' && ch<='z'))
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
        
    
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Charater");
    }

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 6     input: 6       
//
//  output: 
//
//  *       *       *       *       *       *
//  *       #       #       #       *       *
//  *       #       #       *       $       *
//  *       #       *       $       $       *
//  *       *       $       $       $       *
//  *       *       *       *       *       *
//  
/////////////////////////////////////////////////