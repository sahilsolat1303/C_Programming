/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : ReverceDisplay
//  Description :   Accept string from user and reverse the string
//  Input :         string
//  Output :        string
//  Auther :        Sahil Subhash Solat
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

void ReverceDisplay(char *str)
{
    char *temp = str;
    while (*str != '\0')
    {
        str++;
    }

    str--;
    while (str >= temp)
    {
        printf("%c",*str);
        str--;
    }
    
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{

    char Arr[50]={'\0'};

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    ReverceDisplay(Arr);

    return 0;
}