/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  print_even_numbers
//  Description:    It is use to print even number up to N
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           22/10/2025
//
/////////////////////////////////////////////////////////

void print_even_numbers(
                            int limit                           //input 
                        )
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=limit;iCnt++)
    {
        if(iCnt%2==0)
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

    print_even_numbers(limit);                                  // Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 12
//
//  output: 2   4   6   8   10  12
//
//  input: 8
//
//  output: 2   4   6   8
//
/////////////////////////////////////////////////
