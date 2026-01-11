/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CountChar
//  Description :   Accept one character from user and return the 
//                  frequency that character from the string.
//  Input :         string, char
//  Output :        int
//  Auther :        
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int CountChar(char str[],char ch)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str ++;
    }
    return iCount;
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Charater:\n");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("Character frequency is %d",iRet);

    return 0;
}

