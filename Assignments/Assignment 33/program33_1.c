/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////
#include<stdio.h>    
#include<stdlib.h>

/////////////////////////////////////////////////////////
//
//  Function Name:  ChkAlpha
//  Description:    It is use to check whether it is 
//                  alphabet or not
//  Input:          Charater
//  Output:         Boolen
//  Author:         Sahil Subhash Solat
//  Date:           27/11/2025
//
/////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
        if((ch >= 'a' && ch<='z') || (ch>='A' && ch<='Z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: F      
//
//  output: 
//          It is Character
//
//  input: %      
//
//  output: 
//          It is not a Character
//
// 
//  
/////////////////////////////////////////////////