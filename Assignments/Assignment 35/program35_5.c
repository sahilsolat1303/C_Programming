/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description :   Display given string in reverse order.
//  Input :         string
//  Output :        string
//  Auther :        Sahil Subhash Solat
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char *temp = str;

    while(*str != '\0')
    {
        str++;
    }

    str --;
    while(*str>=*temp)
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
    char Arr[20];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);
    return 0;
}

