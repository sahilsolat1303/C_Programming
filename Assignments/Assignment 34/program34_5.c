/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display characters decimal, octal and 
//                  hexadecimal values.
//  Input :         char
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

void Display(char ch)
{
   
    printf("Charater :%c\n",ch);
    printf("Decimal : %d\n",ch);
    printf("Hex : %x\n",ch);
    printf("Ocatal : %o\n",ch);   
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}

