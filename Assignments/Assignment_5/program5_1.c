/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                       //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  CheckEvenOdd
//  Description:    It is use to check even or odd
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           18/10/2025
//
/////////////////////////////////////////////////////////

void CheckEvenOdd(
                    int num                                             //Input
                )
{
    if((num%2)==0)                                                      // Business logic
    {
        printf("%d is Even Number\n",num);
    }
    else
    {
        printf("%d is Odd Number\n",num);
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{

    int number;                                                         // To accepet input

    printf("Enter the Number:\n");
    scanf("%d",&number);

    CheckEvenOdd(number);                                               // Function call
    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 13
//
//  output: 13 is Odd Number
//
//  input: 12
//
//  output: 12 is Even Number
//
/////////////////////////////////////////////////
