/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                       //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  DollarToINR
//  Description:    It is use to convert us dollar to
//                  indian currency
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           20/10/2025
//
/////////////////////////////////////////////////////////

int DollarToINR(
                    int iNo                                             //Input
                )
{
    int iRes = 1;
    iRes = iNo*70;                                                      // Business logic

    return iRes;
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue=0;                                                       // To accepet input
    int iRet=0;                                                         // To Store the result

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);                                           // Function call

    printf("Value of INR is %d",iRet);

    return 0 ;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 10             output: 700
//  input: 3              output: 210
//  input: 1200           output: 84000
//
/////////////////////////////////////////////////