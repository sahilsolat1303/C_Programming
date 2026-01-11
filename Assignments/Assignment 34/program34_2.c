/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to convert upper to lower
//                  and lower to upper
//  Input:          char
//  Output:         char
//  Author:         Sahil Subhash Solat
//  Date:           28/11/2025
//
/////////////////////////////////////////////////////////

void Display(char ch)
{
    if((ch>='a') && (ch<='z'))
    {
        printf("%c",ch-32);
    }
    else if((ch>='A') && (ch<='Z'))
    {
        printf("%c",ch+32);
    }
    else
    {
        printf("%c",ch);
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

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}

