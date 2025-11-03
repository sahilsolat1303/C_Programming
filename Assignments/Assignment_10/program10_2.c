/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  RectArea
//  Description:    It is use to calculate area of 
//                  rectangle
//  Input:          integer
//  Output:         float
//  Author:         Sahil Subhash Solat
//  Date:           21/10/2025
//
/////////////////////////////////////////////////////////

double RectArea( 
                    float fWidth,                               // To accepet input
                    float fHeight                               // To Store the result
                )
{
    float Area = 0.0;
    Area = fWidth*fHeight;                                      // Business logic

    return Area;
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    float fValue1=0.0,fValue2=0.0;                              // To accepet input
    double dRet = 0.0;                                          // To Store the result

    printf("Enter Width:\n");
    scanf("%f",&fValue1);

    printf("Enter Height:\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);                           // Function call

    printf("Area of rectangle is %f",dRet);

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 5.3  input: 9.78     output: 51.834000
//  input: 10.4 input: 6.9      output: 71.760002
//
/////////////////////////////////////////////////
