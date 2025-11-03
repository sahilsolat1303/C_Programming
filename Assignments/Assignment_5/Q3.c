/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                   //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  CheckLeapYear
//  Description:    It is use to check leap year
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           18/10/2025
//
/////////////////////////////////////////////////////////

void CheckLeapYear(
                      int year                                      //Input
                  )
{
    if((((year%4)==0 && (year%100)!=0)) || (year%400==0))           // Business logic
    {
        printf("%d Is Leap Year\n",year);
    }
    else
    {
         printf("%d Is not Leap Year\n",year);
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int yr;                                                         // To accepet input

    printf("Enter the year:\n");
    scanf("%d",&yr);

    CheckLeapYear(yr);                                              // Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 2000
// 
//  output: 2000 Is Leap Year
//
//  input:  1990
//
//  output: 1990 Is not Leap Year
//
//  input: 2020
//
//  output: 2020 Is Leap Year
//
/////////////////////////////////////////////////