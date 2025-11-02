/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                           //Input Output

/////////////////////////////////////////////////////////
//
//  Function Name:  FactDiff
//  Description:    It is use to print difference between
//                  sum of its factors and non-factors
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           17/10/2025
//
/////////////////////////////////////////////////////////

int FactDiff(
                int iNo                                                     //Input
            )
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int Diff = 0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
           iSum1 = iSum1 + iCnt; 
        }
        else
        {
            iSum2 = iSum2 + iCnt;  
        }
       
    }
     Diff=iSum1-iSum2;                                                      //Business logic
    return Diff;
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                         //To accepet input
    int iRet = 0;                                                           //To store result

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);                                                  //Function call

    printf("%d",iRet);

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 12       output: -34
//  input: 10       output: 13.7
//  input: 48      output: 13.7
//  input: 90      output: 13.7
//
/////////////////////////////////////////////////
