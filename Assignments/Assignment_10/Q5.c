/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  SquareMeter
//  Description:    It is use to convert square feet
//                  square meter
//  Input:          integer
//  Output:         float
//  Author:         Sahil Subhash Solat
//  Date:           21/10/2025
//
/////////////////////////////////////////////////////////

double SquareMeter(
                        int iValue                              //Input
                   )
{
    double fSqrFeet = 0.0;
    fSqrFeet = iValue*0.0929;                                   // Business logic

    return fSqrFeet;

}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                             // To accepet input
    double dRet = 0.0;                                          // To Store the result

    printf("Enter area in square feet:\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);                                 // Function call

    printf("%f",dRet);

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 5        output: 0.464500
//
//  input: 7        output:0.650300
//
/////////////////////////////////////////////////