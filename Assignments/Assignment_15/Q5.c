/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  CountDiff
//  Description:    It is use to print difference between 
//                  sum of even digits and sum of odd digits
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           23/10/2025
//
/////////////////////////////////////////////////////////


int CountDiff(
                    int iNo                                     //input 
            )
{
    if(iNo<0)                                                   //Updater
    {
        iNo = -iNo;
    }
    int iDigit = 0;
    int iSumodd = 0;
    int iSumeven = 0;
    while (iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit%2!=0)
        {
            iSumodd = iSumodd+iDigit;
        }
        else
        {
            iSumeven = iSumeven+iDigit;
        }
        iNo = iNo/10;
    }
    return (iSumeven - iSumodd);
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

//Time complexity = O(N)
int main()
{
    int iValue = 0;                                             // To accepet input
    int iRet = 0;                                               // To Store the result

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);                                   // Function call

    printf("%d",iRet);

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 2395
//
//  output: -15
//
//  input: 1018
//
//  output: 6
//
//  input: 9000
//
//  output: -9
//
/////////////////////////////////////////////////