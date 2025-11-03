/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                                   //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  MultipleDisplay
//  Description:    It is use to print first 5 multiples of
//                  N 
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           19/10/2025
//
/////////////////////////////////////////////////////////

void MultipleDisplay(
                            int iNo                                                 //Input
                    )
{
    int iCnt = 0;
    
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d\t",iNo*iCnt);                                                    // Business logic
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue =0;                                                                  // To accepet input
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);                                                        // Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 4
//
//  output: 4       8       12      16      20
//
//  input: 2
//
//  output: 2       4       6       8       10
//
/////////////////////////////////////////////////
