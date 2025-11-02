/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>   //input output

typedef int BOOL;  // use for only boolean

# define TRUE 1
# define FALSE 0

/////////////////////////////////////////////////////////
//
//  Function Name:  ChkVowel
//  Description:    It is use to check character is 
//                  vowel or not
//  Input:          character
//  Output:         boolean
//  Author:         Sahil Subhash Solat
//  Date:           17/10/2025
//
/////////////////////////////////////////////////////////


BOOL ChkVowel(
                char CValue                                                                                        //Input
            )
{
    if((CValue=='A') || (CValue=='E') || (CValue=='I') || (CValue=='O') || (CValue=='U') 
        || (CValue=='a') || (CValue=='e') || (CValue=='i') || (CValue=='o') || (CValue=='u'))
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
    char cValue ='\0';                                                                                           // To accepet input
    BOOL bRet = FALSE;                                                                                           // To Store the result

    printf("Enter Character:\n");
    scanf("%c",&cValue);
    bRet = ChkVowel(cValue);                                                                                     //Function call

    if(bRet == TRUE)
    {
        printf("IT is Vowel");
    }
    else
    {
         printf("IT is not Vowel");
    }
    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: a        output: True
//  input: r        output: False
//  input: I        output: True
//  input: D        output: False
//  
//
/////////////////////////////////////////////////
