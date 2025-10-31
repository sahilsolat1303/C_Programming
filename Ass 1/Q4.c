////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////
//
//  Function Name:  Check
//  Description:    It is use to check num divisible by 5 or not
//  Input:          integer
//  Output:         boolean
//  Author:         Sahil Subhash Solat
//  Date:           15/10/2025
//
////////////////////////////////////////////////////////////////


bool Check(
                int iNo                                           // Input
           )
{
    if((iNo%5)==0)                                                // Business logic
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////


int main()
{

    int iValue = 0;                                                 //To accepet input
    bool bRet = false;                                              //To store result

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);                                           // method call

    if(bRet == true)
    {
        printf("Divisiable by 5");
    }
    else
    {
        printf("Not Divisiable by 5");
    }
    return 0;
}