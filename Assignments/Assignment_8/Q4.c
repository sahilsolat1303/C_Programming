/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                                   //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  Table
//  Description:    It is use to display table
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
    for(iCnt=1;iCnt<=10;iCnt++)
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
//  output: 2   4   6   8   10  12  14  16  18  20
//
//  input: -5   
//
//  output: 5   10  15  20  25  30  35  40  45  50
//
/////////////////////////////////////////////////