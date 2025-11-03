/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  Count
//  Description:    It is use to count of frequency of
//                  such number is less than 6
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           23/10/2025
//
/////////////////////////////////////////////////////////

int Count(
                int iNo                                         //input 
        )
{
    int iDigit = 0;
    int iCount = 0;
    while (iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit<6)
        {
            iCount = iCount+1;                                  // Business logic
        }
        iNo = iNo/10;

    }
    return iCount;
    
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
    int iRet =0;                                                // To Store the result

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = Count(iValue);                                       // Function call

    printf("%d",iRet);

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 2395
//
//  output: 3
//
//  input: 1018
//
//  output: 3
//
//  input: 96672
//
//  output: 1
//
/////////////////////////////////////////////////
