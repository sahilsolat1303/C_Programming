/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   display pattern (Recursive program)
//  Input :         char
//  Output :        (a b c d e f)
//  Auther :        Sahil Subhash Solat
//  Date :          30/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
   static char ch = 'a';
    
    if(ch<='f' && ch>='a')
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