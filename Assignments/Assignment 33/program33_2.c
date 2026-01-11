/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
//
//  Function Name:  ChkCapital
//  Description:    It is use to check whether it is 
//                  capital or not 
//  Input:          char
//  Output:         boolean
//  Author:         Sahil Subhash Solat
//  Date:           27/11/2025
//
/////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
        if((ch>='A' && ch<='Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: R       
//
//  output: 
//          It is Capital Character
//
//  input: e       
//
//  output: 
//          It is not a Capital Character
//          
//  
/////////////////////////////////////////////////