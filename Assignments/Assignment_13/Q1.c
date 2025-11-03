/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////


#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  print_numbers
//  Description:    It is use to print 1 to N
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           22/10/2025
//
/////////////////////////////////////////////////////////

void print_numbers(
                        int limit                               //input 
                  )
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=limit;iCnt++)
    {
        printf("%d\n",iCnt);
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

    print_numbers(limit);                                       // Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 5
//
//  output: 1       2       3       4       5
//
//  input: 3
//
//  output: 1       2       3
//
/////////////////////////////////////////////////