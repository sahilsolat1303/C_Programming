/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  print_odd_numbers
//  Description:    It is use to print odd number up to N
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           22/10/2025
//
/////////////////////////////////////////////////////////

void print_odd_numbers(
                            int limit                           //input 
                       )
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=limit;iCnt++)
    {
        if(iCnt%2!=0)
        {
            printf("%d\n",iCnt);
        }
    }
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

    print_odd_numbers(limit);                                   // Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 12
//
//  output: 1   3   5   7   9   11
//
//  input: 8
//
//  output: 1   3   5   7
//
/////////////////////////////////////////////////
