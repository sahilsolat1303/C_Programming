/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   display pattern (Recursive program)
//  Input :         char
//  Output :        (A B C D E F)
//  Auther :        Sahil Subhash Solat
//  Date :          30/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    static char ch = 'A';
    
    if(ch<='F' && ch>='A')
    {
        printf("%c\t",ch);
        ch++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}