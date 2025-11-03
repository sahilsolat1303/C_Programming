/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  RangeDisplay
//  Description:    It is use to print number between range
//                  in reverse order
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           21/10/2025
//
/////////////////////////////////////////////////////////

void RangeDisplay(
                        int iStart,                             //Frist input
                        int iEnd                                //Second input
                )
{
    if(iStart>iEnd)                                             //Updater
    {
        printf("Invaild range");
    }
    int iCnt = 0;

    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
    {
        printf("%d\t",iCnt);
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
    int iValue1=0,iValue2=0;                                    // To accepet input

    printf("Enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);                              // Function call

    return 0;

}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 23   32
//
//  output: 32  31  30  29  28  27  26  25  24  23 
//
//  input: 10    10
//
//  output: 10
//
//  input:-4   2
//  
//  output: 2   1   0   -1  -2  -3  -4
//
//  input:  90  18
//
//  output: Invaild range
//
/////////////////////////////////////////////////
