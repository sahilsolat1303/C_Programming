/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  KMtoMeter
//  Description:    It is use to print convert kilometer 
//                  to meter
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           21/10/2025
//
/////////////////////////////////////////////////////////

int KMtoMeter(
                    int iNo                                     //Input
              )
{
    int iMeter=0;
    iMeter = iNo*1000;                                          // Business logic

    return iMeter;
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                             // To accepet input
    int iRet = 0;                                               // To Store the result

    printf("Enter distance:\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);                                   // Function call

    printf("%d",iRet);

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 5            output: 5000
//  input: 12           output: 12000
//
/////////////////////////////////////////////////