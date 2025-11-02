/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                   //Input Output

/////////////////////////////////////////////////////////
//
//  Function Name:  Fact
//  Description:    It is use to print Factors in 
//                  decreasing order
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           17/10/2025
//
/////////////////////////////////////////////////////////

void Fact(
            int iNo                                                 //Input
        )
{
    int iCnt = 0;
    
    for(iCnt=(iNo/2);iCnt>=1;iCnt--)
    {
        if(iNo%iCnt==0)                                             //Business logic
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
    int iValue = 0;                                                 //To accepet input
    int iRet = 0;                                                   //To store result

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Fact(iValue);                                                   //Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 12
//     
//  output: 6   4   3   2   1
//
//  input: 13
//     
//  output: 1
//
//  input: 10
//     
//  output: 5   2   1
//
//  input: 20
//     
//  output: 10  5   4   2   1
//
/////////////////////////////////////////////////
