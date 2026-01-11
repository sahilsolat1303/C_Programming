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
    while (iNo > 0)
    {
        printf("%d\t",iNo);
        if(iNo > 0)
        {
            printf("*\t");
        }
        iNo--;
    }
    Display(iNo);
    
}

int main()
{
    int ivalue = 0;

    printf("Enter Number:\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}