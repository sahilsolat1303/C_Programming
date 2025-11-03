/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  sum_natural_numbers
//  Description:    It is use to print sum os first N 
//                  numbers
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           22/10/2025
//
/////////////////////////////////////////////////////////

int sum_natural_numbers(
                            int limit                           //input 
                        )
{
    int iSum = 0;
    int iCnt = 0;
    for(iCnt=1;iCnt<=limit;iCnt++)
    {
        iSum = iSum+iCnt;                                       // Business logic
    }
    return iSum;
    
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

//Time complexity = O(N)
int main()
{
    int limit;                                                  // To accepet input

    printf("Enter number:\n");
    scanf("%d",&limit);

    printf("%d",sum_natural_numbers(limit));                    // Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 12
//
//  output: 78
//
//  input: 8
//
//  output: 36
//
/////////////////////////////////////////////////