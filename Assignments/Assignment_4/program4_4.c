/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                       //Input Output

/////////////////////////////////////////////////////////
//
//  Function Name:  SumNonFact
//  Description:    It is use to print sum of non factors
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           17/10/2025
//
/////////////////////////////////////////////////////////

int SumNonFact(
                    int iNo                                             //Input
               )
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)                                                 //Business logic
        {
           iSum = iSum + iCnt;                                          //Business logic
        }
    }
    return iSum;
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                     //To accepet input
    int iRet = 0;                                                       //To store result

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);                                            //Function call

    printf("%d",iRet);

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 12      output: 50
//  input: 10      output: 37
//  input: 100     output: 4833
//  input: 158     output: 12321
//
/////////////////////////////////////////////////
