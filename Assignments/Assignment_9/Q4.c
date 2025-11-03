/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  EvenFactorial
//  Description:    It is use to find odd factorial
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           20/10/2025
//
/////////////////////////////////////////////////////////

int EvenFactorial(
                    int iNo                                     //Input
                )
{
    if(iNo<0)                                                   //Updater
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iFact = 1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2!=0)
        {
            iFact = iFact*iCnt;                                 // Business logic

        }
    }
    return iFact;
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                             // To accepet input
    int iRet =0;                                                // To Store the result

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);                                 // Function call

    printf("Even Factorial of number is %d",iRet);
    return 0;
    
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//
//  input: 5            output: 15
//  input: -5           output: 15
//  input: 10           output: 945  
//
/////////////////////////////////////////////////