/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : LastChar
//  Description :   Accept string and one character from the user 
//                  return the index of last Ocuurance of that character.
//  Input :         string, char
//  Output :        int
//  Auther :        Sahil Subhash Solat
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int LastChar(char str[],char ch)
{
    int iCount = 0;
    int lasto = -1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            lasto = iCount;
        }
        str++;
        iCount++;

    }
    return lasto;
   
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

    iRet = LastChar(Arr,cValue);

    printf("Character location is %d",iRet);

    return 0;
}

