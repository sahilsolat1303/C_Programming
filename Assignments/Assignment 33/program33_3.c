/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
//
//  Function Name:  ChkDigit
//  Description:    It is use to check whether it is 
//                  digit or not 
//  Input:          char
//  Output:         Boolen
//  Author:         Sahil Subhash Solat
//  Date:           27/11/2025
//
/////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
        if((ch>='0' && ch<='9'))
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

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 6       
//
//  output: 
//          It is Digit
//
//  input: d       
//
//  output: 
//          It is not a Digit
//
//  
/////////////////////////////////////////////////