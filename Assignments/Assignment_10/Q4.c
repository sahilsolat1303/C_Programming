/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  FhtoCs
//  Description:    It is use to convert fahrenheit to 
//                  celsius
//  Input:          integer
//  Output:         float
//  Author:         Sahil Subhash Solat
//  Date:           21/10/2025
//
/////////////////////////////////////////////////////////

double FhtoCs(
                float fTemp                                     //Input
             )
{
    double fCelsius = 0.0;
    fCelsius = ((fTemp-32)*(5.0/9.0));                          // Business logic

    return fCelsius;

}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int fValue = 0;                                             // To accepet input
    double dRet = 0.0;                                          // To Store the result

    printf("Enter temperature in Fahrenheit:\n");
    scanf("%d",&fValue);

    dRet = FhtoCs(fValue);                                      // Function call

    printf("%f",dRet);

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 34           output: 1.111111
//  input: 10           output: -12.222222
//
/////////////////////////////////////////////////