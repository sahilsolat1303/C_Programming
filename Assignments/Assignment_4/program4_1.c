/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                   //Input Output

/////////////////////////////////////////////////////////
//
//  Function Name:  MultFact
//  Description:    It is use to print Multiplication of 
//                  Factors
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           17/10/2025
//
/////////////////////////////////////////////////////////

int MultFact(
                int iNo                                             //Input
            )
{
    int iCnt = 0;
    int multi = 1;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
           multi = multi * iCnt;                                    //Business logic
        }
    }
    return multi;
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                 //To accepet input
    int iRet = 0;                                                   //To store result

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);                                         //Function call

    printf("%d",iRet);

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 12       output: 144
//  input: 13       output: 1
//  input: 10       output: 10
//  input: 15       output: 15
//  input: 7        output: 1
//
/////////////////////////////////////////////////
