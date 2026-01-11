/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   display pattern (Recursive program)
//  Input :         int
//  Output :        int
//  Auther :        Sahil Subhash Solat
//  Date :          30/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    static int i = iNo;
    
    if(i>0)
    {
        printf("%d\t",i);
        i--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}