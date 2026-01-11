/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSpecial 
//  Description :   Check the given character special or not.
//  Input :         char
//  Output :        char
//  Auther :        Sahil Subhash Solat
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

typedef int BOOL; 

# define TRUE 1
# define FALSE 0

BOOL ChkSpecial(char ch)
{    
    if((ch=='!') || (ch=='@') || (ch=='#') || (ch=='$') || (ch=='%') ||
        (ch=='^') || (ch=='&') || (ch=='*'))
    {
        return TRUE;
    }
    return FALSE;
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

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);
    if(bRet==TRUE)
    {
        printf("It is special Charater");

    }
    else
    {
        printf("IT is not a special Charater");
    }

    return 0;
}


