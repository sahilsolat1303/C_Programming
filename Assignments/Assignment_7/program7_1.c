/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////
  
#include<stdio.h>                                                                   //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  Pattern
//  Description:    It is use to print $* pattern
//  Input:          integer
//  Output:         $*
//  Author:         Sahil Subhash Solat
//  Date:           19/10/2025
//
/////////////////////////////////////////////////////////

void Pattern(
                int iNo                                                             //Input
            ) 
{
    if(iNo<0)                                                                       //Updater
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("$\t*\t");
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

    Pattern(iValue);                                                                // Function call

    return 0;
}

////////////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 3
//
//  output: $       *       $       *       $       *
//
//  input: 2
//
//  output: $       *       $       *   
//
//  input:  -3
//
//  output:  $       *       $       *       $       *
//
////////////////////////////////////////////////////////
