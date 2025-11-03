/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                                   //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  OddDisplay
//  Description:    It is use to print all odd numbers up
//                  to N
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           19/10/2025
//
/////////////////////////////////////////////////////////

void OddDisplay(
                    int iNo                                                        //Input
                )
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)!=0)                                                           // Business logic
        {
            printf("%d\t",iCnt);
        }
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue =0;                                                                // To accepet input
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);                                                           // Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 8  
//   
//  output: 1       3       5       7
//
//  input: 3
//
//  output: 1       3       
//
/////////////////////////////////////////////////
