/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  DisplayDigit
//  Description:    It is use to print digit in reverse
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           23/10/2025
//
/////////////////////////////////////////////////////////

void DisplayDigit(
                        int iNo                                 //input 
                )
{
    int iDigit = 0;
    if(iNo<0)                                                   //Updater
    {
        iNo = -iNo;
    }

    while (iNo!=0)
    {
        iDigit = iNo%10;
        printf("%d\n",iDigit);

        iNo = iNo/10;
    }
    
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

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);                                       // Function call


    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 2395
//
//  output: 5   9   3   2
//
//  input: 1018
//
//  output: 8   1   0   1
//
//  input: -1018
//
//  output: 8   1   0   1
//
/////////////////////////////////////////////////
