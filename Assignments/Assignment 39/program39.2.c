/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   display pattern (Recursive program)
//  Input :         int
//  Output :        (1   2   3   4   5  )
//  Auther :        Sahil Subhash Solat
//  Date :          30/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    static int i = 1;
    
    if(i<=5)
    {
        printf("%d\t",i);
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}