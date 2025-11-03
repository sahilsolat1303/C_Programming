/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  MultDigits
//  Description:    It is use to print multiplication of 
//                  digits
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           23/10/2025
//
/////////////////////////////////////////////////////////

int MultDigits(
                    int iNo                                     //input
              )
{
    if(iNo<0)                                                   //Updater
    {
        iNo = -iNo;
    }
    int iDigit = 0;
    int iMulti = 1;
    while (iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit!=0)
        {
            iMulti = iMulti*iDigit;                             // Business logic
        }
        iNo = iNo/10;
    }
    return iMulti;
    
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

    iRet = MultDigits(iValue);                                  // Function call

    printf("%d",iRet);  

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 2395
//
//  output: 270
//
//  input: 1018
//
//  output: 8
//
//  input: 9000
//
//  output: 9
//
/////////////////////////////////////////////////