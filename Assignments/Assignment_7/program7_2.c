/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                                   //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to print number till that 
//                  number
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
    for(iCnt=1;iCnt<=iNo;iCnt++)
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

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 5 
//
//  output: 1       2       3       4       5    
//
//  input: 3
//
//  output: 1       2       3
//
/////////////////////////////////////////////////
