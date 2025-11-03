/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                                   //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  Number
//  Description:    It is use to check number small, 
//                  medium or greter
//  Input:          integer
//  Output:         character
//  Author:         Sahil Subhash Solat
//  Date:           19/10/2025
//
/////////////////////////////////////////////////////////

void Number(
                int iNo                                                             //Input
            )
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if(iNo>50 && iNo<=100)
    {
        printf("Medium");
    }
    else 
    {
        printf("Large");
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                                 // To accepet input

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Number(iValue);                                                                 // Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 75
//
//  output: Medium
//
//  input: 101
//
//  output: Large
//
/////////////////////////////////////////////////