/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                                   //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to print its numbers line
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           19/10/2025
//
/////////////////////////////////////////////////////////

void Display(
                int iNo                                                             //Input
            )
{
    int iCnt = 0;
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
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
    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);                                                                // Function call

    return 0;
}

/////////////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 4       
//
//  output: -3      -2      -1      0       1       2       3
//
//  input: 2       
//
//  output: -2      -1      0       1       2     
//
/////////////////////////////////////////////////////////
