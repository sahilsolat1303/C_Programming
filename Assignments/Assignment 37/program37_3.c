/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstChar
//  Description :   Accept string and one character from the user 
//                  return the index of first Ocuurance of that character.
//  Input :         string, char
//  Output :        int
//  Auther :        Sahil Subhash Solat
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int FirstChar(char str[],char ch)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }
        str++;
        iCount++;

    }
    return -1;
   
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

    printf("Character first location is %d",iRet);

    return 0;
}

