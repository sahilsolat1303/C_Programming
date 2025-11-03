/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                                   //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  Table
//  Description:    It is use to print reverse table
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           19/10/2025
//
/////////////////////////////////////////////////////////

void Table(
                int iNo                                                             //Input
          )
{
    if(iNo<0)                                                                       //Updater
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt=10;iCnt>=1;iCnt--)
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
    int iValue = 0;                                                                 // To accepet input

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Table(iValue);                                                                  // Function call
    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 2
//
//  output: 20  18  16  14  12  10  8   6   4   2
//  input: -5        
//
//  output: 50  45  40  35  30  25  20  15  10  5
//
/////////////////////////////////////////////////