/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                           //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to print (*#) pattern
//  Input:          integer
//  Output:         *#
//  Author:         Sahil Subhash Solat
//  Date:           20/10/2025
//
/////////////////////////////////////////////////////////

void Display(
                int iNo                                                     //Input
            )
{
    if(iNo<0)                                                               //Updater
    { 
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
        
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t");
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                         // To accepet input

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Display(iValue);                                                        // Function call
    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 2
//
//  output: *       *       #       #
//
//  input: -3          
//
//  output: *       *       *       #       #       #
//
//  input: 1        
//
//  output: *       #
//
/////////////////////////////////////////////////
