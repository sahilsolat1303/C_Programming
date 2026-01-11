/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   display pattern (Recursive program)
//  Input :         int
//  Output :        (5   4   3   2   1)
//  Auther :        Sahil Subhash Solat
//  Date :          30/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    static int i = 5;
    
    if(i>=1)
    {
        printf("%d\t",i);
        i--;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}