/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                           //input outpt

#include<stdbool.h>                                                         // use for only boolean

/////////////////////////////////////////////////////////
//
//  Function Name:  ChkGreater
//  Description:    It is use to check greater than 100 
//                  or not
//  Input:          integer
//  Output:         boolean
//  Author:         Sahil Subhash Solat
//  Date:           18/10/2025
//
/////////////////////////////////////////////////////////

bool ChkGreater(
                    int iNo                                                 //Input
                )
{
    if(iNo <= 100)                                                          // Business logic
    {
        return false;
    }
    else
    {
        return true;
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                         // To accepet input
    bool bRet = false;                                                      // To Store the result
    
    printf("Please Enter the number:\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);                                              // Function call

    if(bRet==true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 101
//
//  output: Greater
//
//  input: 39
//
//  output: Smaller
//
/////////////////////////////////////////////////
