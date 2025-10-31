/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////
//
//  Function Name:  Accept
//  Description:    It is use to print *
//  Input:          integer
//  Output:         *
//  Author:         Sahil Subhash Solat
//  Date:           15/10/2025
//
/////////////////////////////////////////////////////////

void Accept(
                int iNo                                               // Input 
            )
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\n");
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;                                                   //Input
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Accept(iValue);                                                   // Method call
    return 0;


}