/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  FactorialDiff
//  Description:    It is use to print difference between 
//                  even factorial and odd factorial
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           20/10/2025
//
/////////////////////////////////////////////////////////

int FactorialDiff(
                        int iNo                                 //Input
                 )
{ 
    if(iNo<0)                                                   //Updater
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iFactE = 1;
    int iFactO = 1;
    // int diff = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            iFactE = iFactE*iCnt;

        }
        else
        {
            iFactO = iFactO*iCnt;
        }
    }
    return iFactE-iFactO;                                       // Business logic
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

    iRet=FactorialDiff(iValue);                                 // Function call

    printf("Factorial difference  is %d",iRet);
    return 0;
    
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 5            output: -7
//  input: -5           output: -7
//  input: 10           output: 2895
//
/////////////////////////////////////////////////
