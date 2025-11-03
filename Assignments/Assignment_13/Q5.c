/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  sum_even_numbers
//  Description:    It is use to print sum of first N 
//                  even number
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           22/10/2025
//
/////////////////////////////////////////////////////////

int sum_even_numbers(
                        int limit                               //input 
                    )
{
   return limit*(limit+1);                                      // Business logic
    
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

//Time complexity = O(N)
int main(void)
{ 
    int limit;                                                  // To accepet input

    printf("Enter number:\n");
    scanf("%d",&limit);

    printf("%d",sum_even_numbers(limit));                       // Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 12
//
//  output: 156
//
//  input: 8
//
//  output: 72
//
/////////////////////////////////////////////////