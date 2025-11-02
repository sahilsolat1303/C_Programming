/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //Input Output

/////////////////////////////////////////////////////////
//
//  Function Name:  NonFact
//  Description:    It is use to print all non factors
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           17/10/2025
//
/////////////////////////////////////////////////////////

void NonFact(
                int iNo                                         //Input
            )
{
    int iCnt = 0;
    
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)                                         //Business logic
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
    int iValue = 0;                                             //To accepet input
    int iRet = 0;                                               //To store result

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    NonFact(iValue);                                            //Function call
    return 0;
}

////////////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 12
// 
//  output: 5       7       8       9       10      11
// 
//  input: 13
// 
//  output: 2   3   4   5   6   7   8   9   10  11  12
//  
//  input: 10
// 
//  output: 3   4   6   7   8   9
//
//
////////////////////////////////////////////////////////
