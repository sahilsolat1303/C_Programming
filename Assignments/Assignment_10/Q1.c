/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  CircleArea
//  Description:    It is use to calculate area of circle
//  Input:          integer
//  Output:         float
//  Author:         Sahil Subhash Solat
//  Date:           21/10/2025
//
/////////////////////////////////////////////////////////

double CircleArea(
                        float fRadius                           //Input
                 )
{
    float Area = 0.0;
    Area = 3.14*fRadius*fRadius;                                // Business logic

    return Area;
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;                                         // To accepet input
    double dRet = 0.0;                                          // To Store the result

    printf("Enter radius:\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);                                  // Function call

    printf("Area of the circle is %f",dRet);

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 5.3           output: 88.202606
//  input: 10.4          output: 339.622375
//
/////////////////////////////////////////////////